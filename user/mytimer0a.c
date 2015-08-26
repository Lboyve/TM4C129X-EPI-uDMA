#include "includes.h"

/********************************************************************
��������:��ʱ����ʼ�� 200us
��ڲ���:��
��     ��:��
��     ע: 200 us
********************************************************************/

void Timer0_A_Init(void)
{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_TIMER0);	
	
    TimerConfigure(TIMER0_BASE, TIMER_CFG_A_PERIODIC);
    TimerLoadSet(TIMER0_BASE, TIMER_A, SYSTEM_CLOCK_120M/1000/5);//��ʱ200 us
    TimerIntEnable(TIMER0_BASE, TIMER_TIMA_TIMEOUT);
    IntEnable(INT_TIMER0A);
}

/********************************************************************
��������:��ʱ�� 200 us  ISR
��ڲ���:��
��     ��:��
��     ע:ISR
********************************************************************/

void Timer0AIntHandler(void) //Timer ISR 200us
{	
	
	TimerIntClear(TIMER0_BASE, TIMER_TIMA_TIMEOUT);
	
	//start udma transter
	
	dma_write(send_data,16,0);
	
}
/*******************************************************************/
