#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


#include "inc/hw_gpio.h"
#include "inc/hw_epi.h"
#include "inc/hw_types.h"
#include "inc/hw_memmap.h"
#include "inc/hw_ints.h"
#include "inc/hw_timer.h"
#include "driverlib/cpu.h"
#include "driverlib/sysctl.h"
#include "driverlib/interrupt.h"
#include "driverlib/rom.h"
#include "driverlib/debug.h"
#include "driverlib/pin_map.h"
#include "driverlib/gpio.h"
#include "driverlib/timer.h"
#include "driverlib/udma.h"
#include "driverlib/epi.h"
#include "driverlib/uart.h"

#include "utils/uartstdio.h"

#include "user/mygpio.h"
#include "user/myepi.h"
#include "user/myudma.h"
#include "user/mytimer0a.h"

