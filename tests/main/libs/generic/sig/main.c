#include <test_func.h>
#include <sig.h>

proc_t proc[6];
stack_t proc_stack[6][PROC_STACK_SIZE];

sig_t test_sig;
void (*test_hook)(void);

void test_running(void)
{
    test_output( (proc[2].flags & PROC_STATE_MASK) == PROC_STATE_RUNNING, 5 );
    test_inc();
}

flag_t status;

void main_proc_test( void * arg )
{
    proc_run( &proc[1] );

    test_start();

    // sig_signal test 1
    // No processes are waiting for signal, test must not
    test_var_sig = 1;
    test_hook = test_clear;
    sig_signal( &test_sig );
    test_output( (test_var_sig == 1), 1 );

    // sig_broadcast test 2
    // No prcess must start
    sig_broadcast( &test_sig );
    test_output( test_var_sig, 2 );

    proc_run( &proc[2] );
    proc_run( &proc[3] );
    proc_run( &proc[4] );
    proc_run( &proc[5] );

    wait_time( 20 );
    // All proceeses of interest are waiting for signal now!
    // sig_signal test 6
    test_var_sig = 0;
    test_hook = test_running;


    sig_signal( &test_sig );
    wait_time( 20 );
    test_output( (test_var_sig == 1), 6 );

    wait_time( 20 );

    // sig_broadcast test 7
    test_var_sig = 0;
    test_hook = test_inc;
    status = sig_broadcast( &test_sig );
    test_output( SYNC_ST_EEMPTY == status, 7);

    wait_time( 20 );
    test_output( (test_var_sig == 4), 8 );

    tests_end();
}

void main_sig( void * arg )
{
    while(1)
    {
        flag_t status;
        status = sig_wait( &test_sig );
        test_output( SYNC_ST_OK == status, 9 );
        test_hook();
        wait_time(1);
    }
}

void main_lb( void * arg )
{
    while(1)
    {
        wait_time(10);
        // Run local load balancer on multicore system with local load balancing.
        SCHED_LOCAL_LOAD_BALANCER();
    }
}

void idle_main( void * arg )
{
    while(1)
    {
        wait_time(10);
        // Run local/global load balancer on multicore system with local/global lazy load balancing.
        SCHED_IDLE_LOAD_BALANCER();
    }
}

int main(void)
{
    /**************************************************
    *          For test purposes only!!!              *
    *  It is strongly recomended to initiate hardware *
    *         AFTER init_bugurt() call!!!             *
    **************************************************/
    /*
     * This function disables interrupts
     * and initiates hardware.
     */
    init_hardware();
    init_bugurt();

    SCHED_SYSTICK_HOOK_ADD();

    proc_init_isr( &proc[0], main_proc_test, SVH0, RSH0, 0, &proc_stack[0][PROC_STACK_SIZE-1], 4,      1, 0 ARG_END );
    proc_init_isr( &proc[1], main_lb,        SVH1, RSH1, 0, &proc_stack[1][PROC_STACK_SIZE-1], LOWEST, 1, 0 SCHED_ARG_END );
    proc_init_isr( &proc[2], main_sig,       SVH2, RSH2, 0, &proc_stack[2][PROC_STACK_SIZE-1], 0,      2, 0 ARG_END );
    proc_init_isr( &proc[3], main_sig,       SVH3, RSH3, 0, &proc_stack[3][PROC_STACK_SIZE-1], 1,      2, 0 ARG_END );
    proc_init_isr( &proc[4], main_sig,       SVH4, RSH4, 0, &proc_stack[4][PROC_STACK_SIZE-1], 2,      2, 0 ARG_END );
    proc_init_isr( &proc[5], main_sig,       SVH5, RSH5, 0, &proc_stack[5][PROC_STACK_SIZE-1], 3,      2, 0 ARG_END );

    sig_init_isr( &test_sig );

    proc_run_isr( &proc[0] );

    start_bugurt();
    return 0;
}