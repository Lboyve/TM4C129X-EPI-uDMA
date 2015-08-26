#ifndef __MYUDMA_H__

#define __MYUDMA_H__

#include <stdint.h>

#define		uDMA_TO_EPI_BASE	 0xC0000000


extern uint32_t g_uluDMAErrCount;


void DMA_Init(void);
void dma_write(uint8_t* buffer, uint16_t size, uint8_t offset_add);

#endif
