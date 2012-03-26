/**************************************************************************
    BuguRTOS-0.3.x(Bugurt real time operating system)
    Copyright (C) 2011  anonimous

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
#ifndef _MUTEX_H_
#define _MUTEX_H_

#ifdef CONFIG_USE_HIGHEST_LOCKER

#define GET_PRIO(mutex) mutex->prio

#else

#define GET_PRIO(mutex) ((prio_t)0)

#endif


/*!
\file
\brief Заголовок мьютекса.
*/
//          Мьютекс
typedef struct _mutex_t mutex_t;
// Свойства
/*!
\brief
Мьютекс.

Используется для управления доступом к общим ресурсам, в тех случаях, когда общий ресурс нужен в течение долгого времени.
Поддерживается произвольная вложенность мьютексов. При использовании опции CONFIG_USE_HIGHEST_LOCKER, работа с мьютексами производится по протоколу highest locker, более подробно написано в Википедии.

\warning Мьютексы захватываются и освобожаются только процессами. Нельзя делать это из обработчиков прерываний.
\warning Мьютекс должен освободить ИМЕННО ТОТ процесс, который его захватил.
*/
struct _mutex_t
{
    xlist_t mutex_list; /*!< Список ожидающих процессов. */
#ifdef CONFIG_USE_HIGHEST_LOCKER
    prio_t prio;/*!< Приоритет. */
#endif // CONFIG_USE_HIGHEST_LOCKER
    bool_t free;/*!< Флаг "свободен", 1 - если мьютекс свободен, 0 - если занят. */
#ifdef CONFIG_MP
    lock_t lock;/*!< Спин-блокировка. */
#endif // CONFIG_MP
};
// Методы
/*!
\brief
Инициализация мьютекса из критической секции, или обработчика прерываний.

Да, инициировать из обработчика прерывания можно!
*/
void mutex_init_isr(
    mutex_t * mutex /*!< Указатель на мьютекс. */
#ifdef CONFIG_USE_HIGHEST_LOCKER
    ,prio_t prio /*!< В случае использования CONFIG_USE_HIGHEST_LOCKER, - приоритет мьютекса. */
#endif // CONFIG_USE_HIGHEST_LOCKER
);
/*!
\brief
Инициализация мьютекса.
*/
void mutex_init(
    mutex_t * mutex /*!< Указатель на мьютекс. */
#ifdef CONFIG_USE_HIGHEST_LOCKER
    ,prio_t prio /*!< В случае использования CONFIG_USE_HIGHEST_LOCKER, - приоритет мьютекса. */
#endif // CONFIG_USE_HIGHEST_LOCKER
);
/*!
\brief
Захват мьютекса.

Если мьютекс свободен - процесс захватывает его и продолжает выполняться, если уже занят - процесс останавливается и записывается в список ожидающих.

\param mutex Указатель на мьютекс.
\return 1 - если уддалось захватить без ожидания, 0 - если пришлось ждать.
*/
bool_t mutex_lock( mutex_t * mutex );
// Попытка захвата
/*!
\brief
Попытка захвата мьютекса.

Если мьютекс свободен - процесс захватывает его и продолжает выполняться, если уже занят - процесс проболжает выполнение.

\param mutex Указатель на мьютекс.
\return 1 - если уддалось захватить, 0 - если не удалось.
*/
bool_t mutex_try_lock( mutex_t * mutex );
/*!
\brief
Освобождение мьютекса.

Если список ожидающих процессов пуст - вызывающий процесс освобождает мьютекс, если список не пуст - ставит на выполнение голову списка.
Также происходит обработка флагов, при необходимости вызывающий процесс останавливается.

\param mutex Указатель на мьютекс.
*/
void mutex_unlock( mutex_t * mutex );

//Функции для врутреннего использования
/*!
\brief
Захват мьютекса, для внутреннего использования.

Если мьютекс свободен - процесс захватывает его и продолжает выполняться, если уже занят - процесс останавливается и записывается в список ожидающих.

\param mutex Указатель на мьютекс.
\return 1 - если удалось захватить без ожидания, 0 - если пришлось ждать.
*/
bool_t _mutex_lock( mutex_t * mutex );
/*!
\brief
Попытка захвата мьютекса, для внутреннего использования.

Если мьютекс свободен - процесс захватывает его и продолжает выполняться, если уже занят - процесс продолжает выполнение.

\param mutex Указатель на мьютекс.
\return 1 - если уддалось захватить, 0 - если не удалось.
*/
bool_t _mutex_try_lock( mutex_t * mutex );
/*!
\brief
Освобождение мьютекса, для внутреннего использования.

Если список ожидающих процессов пуст - вызывающий процесс освобождает мьютекс, если список не пуст - ставит на выполнение голову списка.
Также происходит обработка флагов, при необходимости вызывающий процесс останавливается.

\param mutex Указатель на мьютекс.
*/
void _mutex_unlock( mutex_t * mutex );

#endif // _MUTEX_H_
