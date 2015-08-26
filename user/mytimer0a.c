#include "includes.h"

/********************************************************************
函数功能:定时器初始化 200us
入口参数:无
返     回:无
备     注: 200 us
********************************************************************/

void Timer0_A_Init(void)
{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_TIMER0);	
	
    TimerConfigure(TIMER0_BASE, TIMER_CFG_A_PERIODIC);
    TimerLoadSet(TIMER0_BASE, TIMER_A, SYSTEM_CLOCK_120M/1000/5);//定时200 us
    TimerIntEnable(TIMER0_BASE, TIMER_TIMA_TIMEOUT);
    IntEnable(INT_TIMER0A);
}

/********************************************************************
函数功能:定时器 200 us  ISR
入口参数:无
返     回:无
备     注:ISR
********************************************************************/

void Timer0AIntHandler(void) //Timer ISR 200us
{	
	
	TimerIntClear(TIMER0_BASE, TIMER_TIMA_TIMEOUT);
	
	//start udma transter
	
	dma_write(send_data,16,0);
	
}
/*******************************************************************/
