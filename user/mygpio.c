#include "includes.h"

uint8_t	 *data;
uint8_t		send_data[EPI_DATA_SIZE]={0};

/********************************************************************
函数功能: IO初始化
入口参数:无
返     回:无
备     注:无
********************************************************************/

void All_GPIOInit(void)
{
	SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
	SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOB);
	SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOC);
	SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOD);
	SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOE);
	SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
	SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOG);
	SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOH);
	SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOJ);
	SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOK);
	SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOL);
	SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOM);
	SysCtlPeripheralEnable(SYSCTL_PERIPH_GPION);
	SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOP);
	SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOQ);
	
	HWREG(GPIO_PORTD_BASE + GPIO_O_LOCK) = 0x4C4F434B;
	HWREG(GPIO_PORTD_BASE + GPIO_O_CR) = 0x000000FF;
	HWREG(GPIO_PORTQ_BASE + GPIO_O_LOCK) = 0x4C4F434B;
	HWREG(GPIO_PORTQ_BASE + GPIO_O_CR) = 0x000000FF;
	
//EPI

	GPIOPinConfigure(EPI_D0);
	GPIOPinConfigure(EPI_D1);
	GPIOPinConfigure(EPI_D2);
	GPIOPinConfigure(EPI_D3);
	GPIOPinConfigure(EPI_D4);
	GPIOPinConfigure(EPI_D5);
	GPIOPinConfigure(EPI_D6);
	GPIOPinConfigure(EPI_D7);
	GPIOPinConfigure(EPI_A0);
	GPIOPinConfigure(EPI_A1);
	GPIOPinConfigure(EPI_A2);
	GPIOPinConfigure(EPI_A3);
	GPIOPinConfigure(EPI_A4);
	GPIOPinConfigure(EPI_WR);

	GPIOPadConfigSet(EPI_PORTA_PINS, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD);
	GPIOPadConfigSet(EPI_PORTC_PINS, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD);
	GPIOPadConfigSet(EPI_PORTG_PINS, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD);
	GPIOPadConfigSet(EPI_PORTK_PINS, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD);
	GPIOPadConfigSet(EPI_PORTM_PINS, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD);
	GPIOPadConfigSet(EPI_PORTP_PINS, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD);
	
	GPIOPinTypeEPI(EPI_PORTA_PINS);
	GPIOPinTypeEPI(EPI_PORTC_PINS);
	GPIOPinTypeEPI(EPI_PORTG_PINS);
	GPIOPinTypeEPI(EPI_PORTK_PINS);
	GPIOPinTypeEPI(EPI_PORTM_PINS);
	GPIOPinTypeEPI(EPI_PORTP_PINS);

}

/*******************************************************************/
