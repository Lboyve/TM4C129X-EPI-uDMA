#include "includes.h"

int fputc(int ch, FILE *f)
{
  UARTCharPut(UART1_BASE, (char)ch);
  return ch;
}

/********************************************************************
函数功能:UART1 Inittial,
入口参数:void
返     回:无
备      注:
********************************************************************/

void UartInit(void)   //初始化UART1,115200-8-N-1
{
	SysCtlPeripheralEnable(SYSCTL_PERIPH_UART1);
	
	GPIOPinConfigure(GPIO_PB1_U1TX);
	GPIOPinTypeUART(GPIO_PORTB_BASE,GPIO_PIN_1);

	UARTStdioConfig(1, 115200, SYSTEM_CLOCK_120M);//
}

/*******************************************************************/

/********************************************************************
函数功能:主函数
入口参数:
返     回:int 型整数
备     注:无
********************************************************************/

int main(void)
{
	
	uint32_t EPI_RIS=0,EPI_ISC=0,FIFOCNT=0;

	SysCtlClockFreqSet((SYSCTL_XTAL_16MHZ |SYSCTL_OSC_MAIN | SYSCTL_USE_PLL | 
											SYSCTL_CFG_VCO_480), SYSTEM_CLOCK_120M);
	
	All_GPIOInit();
	Timer0_A_Init();
	EPI_Init();
	DMA_Init();
	UartInit();

	TimerEnable(TIMER0_BASE, TIMER_A);
	
	IntMasterEnable();
	while(1)
	{
		EPI_RIS = HWREG(EPI0_BASE+ EPI_O_RIS);
		EPI_ISC = HWREG(EPI0_BASE + EPI_O_EISC);
		FIFOCNT = HWREG(EPI0_BASE + EPI_O_WFIFOCNT);
		UARTprintf("RIS %d  ISC %d  FIFOCNT %d\n",EPI_RIS,EPI_ISC,FIFOCNT);

	}
}

/*******************************************************************/

