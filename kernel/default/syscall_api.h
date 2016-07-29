/**************************************************************************
    BuguRTOS-1.0.x (Bugurt real time operating system)
    Copyright (C) 2016 anonimous

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

    Please contact with me by E-mail: shkolnick.kun@gmail.com

    A special exception to the GPL can be applied should you wish to distribute
    a combined work that includes BuguRTOS, without being obliged to provide
    the source code for any proprietary components. See the file exception.txt
    for full details of how and when the exception can be applied.
**************************************************************************/

/*****************************************************************************************
```````````````````````````````..:+oyhdmNNMMMMMMNmmdhyo+:..```````````````````````````````
``````````````````````````.:oydNMMMMMMMMMNNNNNNNNMMMMMMMMMNdy+:.``````````````````````````
```````````````````````:sdNMMMMMNdys+/::----------::/osydNMMMMMNds:```````````````````````
```````````````````.+hNMMMMmho/-..........................-/shmMMMMNh/.```````````````````
````````````````./hNMMMNho:...................................-:ohNMMMNh/`````````````````
``````````````.smMMMNy/-.......:////ss++/+-.......................-+yNMMMmo.``````````````
````````````-sNMMMd+-.....:////:-...-/s::..............+o/-..........-odMMMNs.````````````
``````````.sNMMNh/....................................-o:--............./hMMMNo.``````````
`````````+mMMMh:-........................................-...............-/dMMMm/`````````
```````.yMMMm/...................-::--..................:-........--........+mMMMy.```````
``````:mMMMy-.......................-::-...............-:.........-::........-yMMMd:``````
`````/NMMN+-..................::-.....-:-............../--.........-:/-.......-+NMMN:`````
````+NMMm::o/-..--/+o+o+++++o+osys+//::-::.............:/....-:-::-..-++-.......:NMMN/````
```/NMMm:.-++-+yhs/-``       `dMMMMMmho+:-..............:-/+yho/:/+oyo//o-......./mMMN:```
``-NMMm/....-/--::/o+o+oo+oo++oosyss+smyo/.............:yyho-`     smMMddh-......./NMMN.``
`.hMMM/......-++:-.-:oooooooooosyyhhys/...............-+osyyyyysssssooo+ohhs-......+MMMh.`
`+MMMy.......-::/++:-.....-:/++++o+o/--................--/oooo+o++o+++////-y/.......hMMM/`
.mMMN:.........--:---...-::/+//::--.......................--//+//-...-.....+/......./NMMd`
/MMMy............-::----------....----/+-.....................-++/:---....-o-........hMMN:
yMMM/.............--:://///oo+++/+++oo+-.......................-://+/:--::::.........+MMMs
mMMN:................----:/h:::/:/::---.........................--/osss+++:..........:NMMd
MMMd-....................:mNs:-....................................--:odo:-..........:mMMN
MMMd-....................yoshyoso:--................................../mm/...........:mMMM
MMMm:..................../-o/h.y-:+dooo+/:--....................-/osydddmh...........:mMMN
mMMN:........................+mNs `h.  -d/:/+h++ooooy+++s++y+++mo+y` yh.do...........:NMMh
sMMM+........................-hmMo/ds  oMo`.-o     :h   s:`h` `Nysd.-Ny-h:...........+MMMo
/MMMh........................./smMMMMd+NMMNNMh`    sN: .mNNMddNMMMMNmN+..............hMMN:
.dMMN/........................./+hMMMMMMMMMMMMmhyyyNMNNMMMMMMMMMMMNsoo-............./NMMd`
`+MMMh.........................-/+omMMMMMMMMMMMMMMMMMMMMMMMMMMMMms-/+...............hMMM/`
`.hMMM+..........................:/-omMMMMMMMMMMMMMMMdmMdhMMMds/-..-...............oMMMy``
``.NMMN/............................--/hNN/h.`ys:dmsd:-syos+--+.................../NMMN.``
```/NMMm:...........................:+/--:+s++oo+osoo+/:-..-/+::-................/mMMN:```
````/NMMN:............................-/++/:-..........-//+/-..:+.--............/NMMN/````
`````:NMMN+-.............../+-.............-://////////:-.......+s+::.........-oNMMN:`````
``````:mMMMy-..............:/o-.................................:yo//........-hMMMd-``````
```````.yMMMm+.............:o:++-...............................+y+o-......-+mMMMs.```````
`````````/mMMMd/-...........-++:+/-.---........................-ho+/.....-/dMMMm/`````````
``````````.oNMMMh/............-++:++/////:....................-yo:o-...-+hMMMNo.``````````
````````````.sNMMMdo-...........-++::++:-:/+//:..............:o:/o-..-omMMMNo.````````````
``````````````.omMMMNy+-..........-/+-.:/+/:--:+++/++//:/::/+/-+/.-+hMMMMmo```````````````
`````````````````/hNMMMNho:-...............-:/:-....--::::--..-/ohNMMMNy:`````````````````
```````````````````./hNMMMMmhs/-..........................-/shNMMMMNy/.```````````````````
```````````````````````:sdNMMMMMNdhso+/:----------:/+oshdNMMMMMNho:```````````````````````
``````````````````````````.:+ydNMMMMMMMMMMNNNNNNMMMMMMMMMMmds+:```````````````````````````
````````````````````````````````.:/osyhdmNNMMMMNNmdhyso/:.````````````````````````````````
******************************************************************************************
*                                                                                        *
*                   This logo was graciously delivered by 10003-kun ITT:                 *
*                                                                                        *
*                           http://www.0chan.ru/r/res/9996.html                          *
*                                                                                        *
*****************************************************************************************/
#ifndef _SYSCALL_API_H_
#define _SYSCALL_API_H_
/*!
\file
\brief \~russian Заголовок системных вызовов.

\warning Все содержимое файла для внутреннего использования!

\~english System call header.

\warning This file content is internal usage!
*/
/*****************************************************************************************/
/*                                   Process control                                     */
/*****************************************************************************************/
/*!
\~russian
\brief Запуск процесса.

Ставит процесс в список готовых к выполнению, если можно (процесс не запущен, ещё не завершил работу, не был "убит"), и производит перепланировку.
\param pid - Идентификатор процесса.
\return BGRT_ST_OK - если процесс был вставлен в список готовых к выполнению, либо код ошибки.

\~english
\brief A process launch routine.

This function schedules a process if possible.

\param pid - A process ID.
\return BGRT_ST_OK - if a process has been scheduled, error code in other cases.
*/
#define BGRT_PROC_RUN(pid) BGRT_SYSCALL_N(PROC_RUN, (void *)pid )

/*!
\~russian
\brief Перезапуск процесса.

Если можно (процесс не запущен, завершил работу, не был "убит"), приводит структуру proc в состояние, которое было после вызова #bgrt_proc_init, и ставит процесс в список готовых к выполнению, и производит перепланировку.
\param pid - Идентификатор процесса.
\return BGRT_ST_OK - если процесс был вставлен в список готовых к выполнению, либо код ошибки.

\~english
\brief A process restart routine.

This function reinitializes a process and schedules it if possible.

\param pid - A process ID.
\return BGRT_ST_OK - if a process has been scheduled, error code in other cases.
*/
#define BGRT_PROC_RESTART(pid) BGRT_SYSCALL_N(PROC_RESTART, (void *)pid )
/*!
\~russian
\brief Останов процесса.

Вырезает процесс из списка готовых к выполнению и производит перепланировку.
\param pid - Идентификатор процесса.
\return BGRT_ST_OK - если процесс был вырезан из списка готовых к выполнению, либо код ошибки.

\~english
\brief A process stop routine.

This function stops a process if possible.
\param pid - A process ID.
\return BGRT_ST_OK - if a process has been stopped, error code in other cases.
*/
#define BGRT_PROC_STOP(pid) BGRT_SYSCALL_N(PROC_STOP, (void *)pid )
/*!
\~russian
\brief Самоостанов процесса.

Вырезает вызывающий процесс из списка готовых к выполнению и производит перепланировку.

\~english
\brief A process self stop routine.

This function stops caller process.
*/
#define BGRT_PROC_SELF_STOP() BGRT_SYSCALL_N(PROC_SELF_STOP, (void *)0 )
/*!
\~russian
\brief Установка флага #BGRT_PROC_FLG_LOCK для вызывающего процесса.

\~english
\brief Set #BGRT_PROC_FLG_LOCK for caller process.
*/
#define BGRT_PROC_LOCK() BGRT_SYSCALL_N(PROC_LOCK, (void *)0 )
/*!
\~russian
\brief Останов процесса по флагу #BGRT_PROC_FLG_PRE_STOP.

\~english
\brief A #BGRT_PROC_FLG_PRE_STOP flag processing routine.
*/
#define BGRT_PROC_FREE() BGRT_SYSCALL_N(PROC_FREE, (void *)0 )
/*!
\~russian
\brief Сброс watchdog для процесса реального времени.

Если функцию вызывает процесс реального времени, то функция сбрасывает его таймер.
Если процесс завис, и таймер не был вовремя сброшен, то планировщик остановит такой процесс и передаст управление другому.

\~english
\brief A watchdog reset routine for real time processes.

If a caller process is real time, then this function resets its timer.
If a real time process failed to reset its watchdog, then the scheduler stops such process and wakes up next ready process.
*/
#define BGRT_PROC_RESET_WATCHDOG() BGRT_SYSCALL_N(PROC_RESET_WATCHDOG, (void *)0 )
/*****************************************************************************************/
/*!
\~russian
\brief Получить приоритет процесса.

\param pid - Идентификатор процесса.
\return - Значение приоритета процесса.

\~english
\brief Get a priority of a process.

\param pid - A process ID.
\return - A process priority value.
*/
#define BGRT_PROC_GET_PRIO(pid,var_ptr) (*(var_ptr) = BGRT_PRIO_LOWEST+1, BGRT_SYSCALL_NVAR(PROC_GET_PRIO, (void *)(var_ptr), (void *)(pid)))
/*!
\~russian
\brief Управление приоритетом процесса.

Устанавливает приоритет процесса, находящегося в любом состоянии.

\param pid - Идентификатор процесса.
\param prio - Новое значение приоритета.

\~english
\brief Set a priority of a process.

It sets a process priority. A process current state doesn't matter.

\param pid - A process ID.
\param prio - New process priority value.
*/
#define BGRT_PROC_SET_PRIO(pid,val) BGRT_SYSCALL_NVAR(PROC_SET_PRIO, (void *)(pid), (int)(val))
/*!
\~russian
\brief Получить идентификатор текущего процесса.

\return Идентификатор процесса.

\~english
\brief Get a current process ID.

\return A current process ID.
*/
#define BGRT_PROC_GET_ID(var_ptr) (*(var_ptr) = BGRT_PID_NOTHING, BGRT_SYSCALL_N(PROC_GET_ID, (void *)(var_ptr))
/*****************************************************************************************/
/*                                        Sync                                           */
/*****************************************************************************************/
/*!
\~russian
\brief
Назначить хозяина объекта типа #bgrt_sync_t.

\param sync Указатель на объект типа #bgrt_sync_t.
\param pid Уникальный идентификатор нового процесса-хозяин объекта типа #bgrt_sync_t.
\return #BGRT_ST_OK в случае успеха, либо код ошибки.

\~english
\brief
Set #bgrt_sync_t object owner.

\param sync A pointer to the object of interest.
\param pid A unique ID of new #bgrt_sync_t object owner.
\return #BGRT_ST_OK on success, or error code.
*/
//bgrt_st_t bgrt_sync_set_owner( bgrt_sync_t * sync, BGRT_PID_T pid );
#define BGRT_SYNC_SET_OWNER(sync_ptr,pid) BGRT_SYSCALL_NVAR(SYNC_SET_OWNER, (void *)(sync_ptr), (void *)(pid))
/*!
\~russian
\brief
Получить хозяина примитива.

\param sync Указатель на интересующий объект типа #bgrt_sync_t.
\return Указатель на процесс-хозяин объекта типа #bgrt_sync_t.

\~english
\brief
Get current #bgrt_sync_t object owner.

\param sync A pointer to the object of interest.
\return A pointer to #bgrt_sync_t object owner.
*/
//BGRT_PID_T bgrt_sync_get_owner( bgrt_sync_t * sync );
#define BGRT_SYNC_GET_OWNER(sync_ptr,var_ptr) (*(var_ptr) = BGRT_PID_NOTHING, BGRT_SYSCALL_NVAR(SYNC_GET_OWNER, (void *)(var_ptr), (void *)(sync_ptr)))
/*!
\~russian
\brief
Завладеть объектом типа #bgrt_sync_t.

\param sync Указатель на объект типа #bgrt_sync_t.
\param touch Если не 0, - пометить sync, как "грязный" случае неудачи.
\return #BGRT_ST_OK в случае успеха, либо код ошибки.

\~english
\brief
Own #bgrt_sync_t object.

\param sync A pointer to the object of interest.
\param touch If not 0 then mark sync as dirty on fail.
\return #BGRT_ST_OK if on success, or error code.
*/
bgrt_st_t bgrt_sync_own( bgrt_sync_t * sync, bgrt_flag_t touch );
/*!
\~russian
\brief
Пометить объект #bgrt_sync_t, как грязный.

\param sync Указатель на объект типа #bgrt_sync_t.
\return #BGRT_ST_OK в случае успеха, либо код ошибки.

\~english
\brief
Touch #bgrt_sync_t object.

\param sync A pointer to the object of interest.
\return #BGRT_ST_OK if on success, or error code.
*/
#define BGRT_SYNC_TOUCH(sync) BGRT_SYSCALL_N(SYNC_TOUCH, (void *)sync)
/*!
\~russian
\brief
"Уснуть" в ожидании синхронизации #bgrt_sync_t.

Блокирует вызывающий процесс.

\param sync Указатель на объект типа #bgrt_sync_t.
\param touch Если не 0, то sync был помечен, как "грязный".
\return #BGRT_ST_OK в случае успеха, иначе - код ошибки.

\~english
\brief
Sleep to wait for synchronization.

Blocks caller process.

\param sync A pointer to the object of interest.
\param touch A touch flag, must be 1 if we've touched a sync before call.
\return #BGRT_ST_OK on success, or error number.
*/
bgrt_st_t bgrt_sync_sleep( bgrt_sync_t * sync, bgrt_flag_t touch );
/*!
\~russian
\brief
"Ожидать", блокировки процесса.

Подождать того момента, как целевой процесс будет заблокирован на целевом примитиве синхронизации.

\param sync Указатель на объект типа #bgrt_sync_t.
\param pid Указатель на идентификатор процесса, который надо подождать, если *pid==#BGRT_PID_NOTHING, то вызывающий процесс будет ждать первой блокировки процесса на объекте типа #bgrt_sync_t.
\param block Флаг блокировки вызывающего процесса, если не 0 и нужно ждать, вызывающий процесс будет заблокирован.
\return #BGRT_ST_OK в случае если дождался блокировки целевого процесса, иначе - код ошибки.

\~english
\brief
Sleep to wait for synchronization.

Wait until target process is blocked on target #bgrt_sync_t object.

\param sync A #bgrt_sync_t object pointer.
\param pid A pointer to an ID of a process, that is supposed to block. If *pid is #BGRT_PID_NOTHING, then caller may wait for first process to block on #bgrt_sync_t object.
\param block Block flag. If non 0 and caller process must wait, then caller is blocked until target process is blocked on #bgrt_sync_t object.
\return #BGRT_ST_OK if target process has blocked on target #bgrt_sync_t object, or error code.
*/
bgrt_st_t bgrt_sync_wait( bgrt_sync_t * sync, BGRT_PID_T * pid, bgrt_flag_t block );
/*!
\~russian
\brief
"Разбудить" ожидающий процесс.

Запускает ожидающий процесс. Может запустить "голову" списка ожидающих процессов,
или какой-то конкретный процесс, в случае, если он заблокирован на целевом примитиве синхронизации.

\param sync Указатель на объект типа #bgrt_sync_t.
\param pid Указатель на процесс, который надо запустить, если 0, то пытается запустить "голову" списка ожидающих.
\param chown Флаг смены хозяина, если не 0, то запускаемый процесс станет новым хозяином примитива синхронизации.
\return #BGRT_ST_OK в случае если удалось запустить процесс, иначе - код ошибки.

\~english
\brief
Sleep to wait for synchronization.

Unblock some waiting process. A process should be blocked on target #bgrt_sync_t object.

\param sync A #bgrt_sync_t object pointer.
\param pid A pointer to a process, that is supposed to wake up. If 0, then try to wake up wait list head.
\param chown A change owner flag. If non 0, then ownership is given to wake up process.
\return #BGRT_ST_OK on process wakeup, or error code.
*/
bgrt_st_t bgrt_sync_wake( bgrt_sync_t * sync, BGRT_PID_T pid, bgrt_flag_t chown );
/*!
\~russian
\brief
"Разбудить", процесс по таймауту.

\param pid Указатель на процесс, который надо подождать, если *pid==0, то вызывающий процесс будет ждать первой блокировки процесса на объекте типа #bgrt_sync_t.
\return #BGRT_ST_OK в случае, если дождался разбудил целевой процесс, #BGRT_ST_EAGAIN, если нужна следующая итерация, иначе - код ошибки.

\~english
\brief
Wake a process on timeout.

\param pid A pointer to a process, that is supposed to wake up.
\return #BGRT_ST_OK if target process has been woken up, #BGRT_ST_EAGAIN if caller must do next iteration, or error code.
*/
//bgrt_st_t bgrt_sync_proc_timeout( BGRT_PID_T pid );
#define BGRT_SYNC_PROC_TIMEOUT(pid) BGRT_SYSCALL_N(SYNC_PROC_TIMEOUT, (void *)pid )
/*****************************************************************************************/
/*!
\~russian
\brief
Аргумент вызова #BGRT_SYSCALL_SYNC_OWN.

\~english
\brief
A #BGRT_SYSCALL_SYNC_OWN arg.
*/
typedef struct
{
    bgrt_sync_t * sync;
    bgrt_flag_t touch;
}bgrt_sync_own_sleep_t;
/*****************************************************************************************/
#define BGRT_SYNC_OWN(s,t) bgrt_sync_own( (bgrt_sync_t *)(s), (bgrt_flag_t)(t) ) /*!< \~russian \brief Смотри #bgrt_sync_own. \~english \brief Watch #bgrt_sync_own. */
/*****************************************************************************************/
#define BGRT_SYNC_SLEEP(s,t) bgrt_sync_sleep((bgrt_sync_t *)(s), (bgrt_flag_t)(t)) /*!< \~russian \brief Смотри #bgrt_sync_sleep. \~english \brief Watch #bgrt_sync_sleep. */
/*****************************************************************************************/
/*!
\~russian
\brief
Для внутреннего пользования.

\~english
\brief
For internal usage.
*/
typedef struct
{
    bgrt_sync_t * sync; /*!< \~russian Указатель на объект типа #bgrt_sync_t. \~english A #bgrt_sync_t object pointer. */
    BGRT_PID_T pid; /*!< \~russian Указатель на процесс. \~english A process pointer. */
    bgrt_flag_t chown;  /*!< \~russian Флаг смены хозяина. \~english A change owner flag. */
}
bgrt_sync_wake_t;
/*****************************************************************************************/
#define BGRT_SYNC_WAKE(s,p,c,st)                                   \
do                                                                 \
{                                                                  \
    volatile bgrt_sync_wake_t scarg;                               \
    scarg.sync = (bgrt_sync_t *)(s);                               \
    scarg.pid = (BGRT_PID_T)(p);                                   \
    scarg.chown = (bgrt_flag_t)(c);                                \
    (st) = BGRT_SYSCALL_N(SYNC_WAKE, (void *)&scarg );  \
}                                                                  \
while(0) /*!< \~russian \brief Смотри #bgrt_sync_wake. \~english \brief Watch #bgrt_sync_wake. */
/*****************************************************************************************/
/*!
\~russian
\brief
Для внутреннего пользования.

\~english
\brief
For internal usage.
*/
typedef struct
{
    bgrt_sync_t * sync;  /*!< \~russian Указатель на объект типа #bgrt_sync_t. \~english A #bgrt_sync_t object pointer. */
    BGRT_PID_T * pid; /*!< \~russian Указатель на буфер процесса. \~english A process buffer pointer. */
    bgrt_flag_t block;   /*!< \~russian Флаг блокирования. \~english A block flag. */
}
bgrt_sync_wait_t;
/*****************************************************************************************/
#define BGRT_SYNC_WAIT(s,p,b,st)                                   \
do                                                                 \
{                                                                  \
    volatile bgrt_sync_wait_t scarg;                               \
    scarg.sync = (bgrt_sync_t *)(s);                               \
    scarg.pid = (BGRT_PID_T *)(p);                                 \
    scarg.block = (bgrt_flag_t)(b);                                \
    (st) = BGRT_SYSCALL_N(SYNC_WAIT, (void *)&scarg ); \
}                                                                  \
while(0) /*!< \~russian \brief Смотри #bgrt_sync_wait. \~english \brief Watch #bgrt_sync_wait. */
/*****************************************************************************************/
/*!
\~russian
\brief
Аргумент вызова #BGRT_SYSCALL_SYNC_PROC_TIMEOUT.

\~english
\brief
A #BGRT_SYSCALL_SYNC_PROC_TIMEOUT arg.
*/
typedef struct
{
    BGRT_PID_T pid;
}
bgrt_sync_proc_timeout_t;
#endif // _SYSCALL_API_H_