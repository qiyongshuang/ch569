/********************************** (C) COPYRIGHT *******************************
* File Name          : Main.c
* Author             : WCH
* Version            : V1.0
* Date               : 2020/07/31
* Description 		 : 
*********************************************************************************
* Copyright (c) 2021 Nanjing Qinheng Microelectronics Co., Ltd.
* Attention: This software (modified or not) and binary are used for 
* microcontroller manufactured by Nanjing Qinheng Microelectronics.
*******************************************************************************/

/*
 *@Note
 *SPIx_DMA routine
 *
 */

#include "CH56x_common.h"

#define  FREQ_SYS   80000000

UINT8 spiBuff[]={1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6};
UINT8 spiBuffrev[16];

/*******************************************************************************
 * @fn       DebugInit
 *
 * @brief    Initializes the UART1 peripheral.
 *
 * @param    baudrate: UART1 communication baud rate.
 *
 * @return   None
 */
void DebugInit(UINT32 baudrate)
{
	UINT32 x;
	UINT32 t = FREQ_SYS;
	
	x = 10 * t * 2 / 16 / baudrate;
	x = ( x + 5 ) / 10;
	R8_UART1_DIV = 1;
	R16_UART1_DL = x;
	R8_UART1_FCR = RB_FCR_FIFO_TRIG | RB_FCR_TX_FIFO_CLR | RB_FCR_RX_FIFO_CLR | RB_FCR_FIFO_EN;
	R8_UART1_LCR = RB_LCR_WORD_SZ;
	R8_UART1_IER = RB_IER_TXD_EN;
	R32_PA_SMT |= (1<<8) |(1<<7);
	R32_PA_DIR |= (1<<8);
}

/*********************************************************************
 * @fn      main
 *
 * @brief   Main program.
 *
 * @return  none
 */
int main()
{  

	UINT8 i;

	SystemInit(FREQ_SYS);
    Delay_Init(FREQ_SYS);

    /* Configure serial debugging */
	DebugInit(115200);
	printf("Start @ChipID=%02X\r\n", R8_CHIP_ID );

	printf( "1.spix mul master mode send data ...\n");
	DelayMs( 100 );

#if 0

    /* SPI0 master mode */
    R32_PA_OUT |= 1<<12;

    R32_PA_PD  &= ~(1<<12 | 1<<13 | 1<<14 );
    R32_PA_DRV &= ~(1<<12 | 1<<13 | 1<<14 );
    R32_PA_DIR |= (1<<12 | 1<<13 | 1<<14 );

    SPI0_MasterDefInit( );

    // DMA Send continuously
    R32_PA_CLR |= 1<<12;

    SPIA_MasterDMATrans(spiBuff, 12);

    R32_PA_OUT |= 1<<12;

    DelayMs( 1 );

#endif


#if 1

	/* SPI1 master mode */
	R32_PB_OUT |= 1<<11;

	R32_PB_PD  &= ~(1<<11 | 1<<12 | 1<<13 );
	R32_PB_DRV &= ~(1<<11 | 1<<12 | 1<<13 );
	R32_PB_DIR |= (1<<11 | 1<<12 | 1<<13 );

	SPI1_MasterDefInit( );

	// DMA Send continuously
	R32_PB_CLR |= 1<<11;

	SPI1_MasterDMATrans(spiBuff, 12);

	R32_PB_OUT |= 1<<11;

	DelayMs( 1 );

#endif

    while(1);

}





