#include "includes.h"


#if defined(ewarm)
#pragma data_alignment=1024
	uint8_t pui8ControlTable[1024];
#elif defined(ccs)
#pragma DATA_ALIGN(pui8ControlTable, 1024)
	uint8_t pui8ControlTable[1024];
#else
	uint8_t pui8ControlTable[1024] __attribute__ ((aligned(1024)));
#endif

uint32_t g_uluDMAErrCount = 0;

/********************************************************************
函数功能:错误中断服务函数
入口参数:void
返     回:void
备     注:
********************************************************************/
void uDMAErrorHandler(void)
{
    uint32_t ulStatus;
    ulStatus = uDMAErrorStatusGet();
    if(ulStatus)
    {
		ulStatus = 0;
        uDMAErrorStatusClear();
        g_uluDMAErrCount++;
		printf("uDMA ERR !\n");
    }
}

/********************************************************************
函数功能:DMA初始化
入口参数:void
返     回:void
备     注:
********************************************************************/

void DMA_Init()
{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_UDMA);
    SysCtlPeripheralSleepEnable(SYSCTL_PERIPH_UDMA);

    IntEnable(INT_UDMAERR);
    uDMAEnable();
    IntEnable(INT_UDMA); 

    uDMAControlBaseSet(pui8ControlTable);
	//uDMAChannelAssign(UDMA_CH21_EPI0TX);

    uDMAChannelSelectSecondary(UDMA_DEF_TMR1B_SEC_EPI0TX);
    uDMAChannelAttributeDisable(UDMA_SEC_CHANNEL_EPI0TX, UDMA_ATTR_HIGH_PRIORITY | 
								UDMA_ATTR_REQMASK | UDMA_ATTR_USEBURST);
    uDMAChannelAttributeEnable(UDMA_SEC_CHANNEL_EPI0TX, UDMA_ATTR_USEBURST | UDMA_ATTR_HIGH_PRIORITY);

    uDMAChannelControlSet(UDMA_SEC_CHANNEL_EPI0TX | UDMA_PRI_SELECT, UDMA_SIZE_8 | UDMA_SRC_INC_8 | UDMA_DST_INC_8| UDMA_ARB_4);
		uDMAIntRegister(UDMA_INT_ERR, uDMAErrorHandler);
}

/********************************************************************
函数功能:启动DMA传输，EPI向外设写数据
入口参数: *buffer , size , offset_add
返     回:无
备     注:无
********************************************************************/

void dma_write(uint8_t* buffer, uint16_t size, uint8_t offset_add)
{
    if (size > 0)
    {																		
			uDMAChannelTransferSet(UDMA_SEC_CHANNEL_EPI0TX | UDMA_PRI_SELECT, UDMA_MODE_BASIC, 
			(void*)(buffer),(void*)(uDMA_TO_EPI_BASE + offset_add),size);//UDMA_MODE_AUTO
			uDMAChannelEnable(UDMA_SEC_CHANNEL_EPI0TX);
    }
}

/*******************************************************************/
