#include "includes.h"							
	
uint16_t g_ui32EPIErrors=0,g_ui32EPIStatus=0;

/********************************************************************
函数功能:EPI  initial
入口参数:void
返     回:void
备     注:HB8,地址数据不复用
********************************************************************/

void EPI_Init(void)
{
	SysCtlPeripheralEnable(SYSCTL_PERIPH_EPI0);

	EPIDividerSet(EPI0_BASE, 28);
	EPIModeSet(EPI0_BASE, EPI_MODE_HB8);
	
	EPIConfigHB8Set(EPI0_BASE, EPI_HB8_MODE_ADDEMUX | EPI_HB8_WRWAIT_1 | EPI_HB8_USE_TXEMPTY, 0);
	EPIAddressMapSet(EPI0_BASE, EPI_ADDR_PER_BASE_C | EPI_ADDR_PER_SIZE_256B | EPI_ADDR_CODE_BASE_NONE );//经测试，映射基址只能为0xC000 0000 !!!
	
	EPIFIFOConfig(EPI0_BASE,(EPI_FIFO_CONFIG_TX_1_4 | EPI_FIFO_CONFIG_WTFULLERR));
	
//	EPIIntEnable(EPI0_BASE,EPI_INT_TXREQ);

	IntEnable(INT_EPI0);//开EPI中断

	while(HWREG(EPI0_BASE + EPI_O_STAT) &  EPI_STAT_INITSEQ)  //等待配置完成
   {
   }
}

/********************************************************************
函数功能:EPI  ISR
入口参数:void
返     回:void
备     注:
********************************************************************/

void EPIIntHandler(void)
{
	uint32_t intStatus;
    intStatus = EPIIntErrorStatus(EPI0_BASE);
    if(intStatus)
    {
        g_ui32EPIErrors++;
    }
    EPIIntErrorClear(EPI0_BASE, intStatus);
    intStatus = EPIIntStatus(EPI0_BASE, false);
    if(intStatus)
    {
        g_ui32EPIStatus = intStatus;
    }
}

/*******************************************************************/
