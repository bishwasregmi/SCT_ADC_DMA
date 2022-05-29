/*
 * Copyright 2016-2022 NXP
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of NXP Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * @file    LPC55S69_Project_SCT_ADC_DMA.c
 * @brief   Application entry point.
 */
#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "fsl_power.h"
#include "clock_config.h"
#include "LPC55S69_cm33_core0.h"
#include "fsl_debug_console.h"
/* TODO: insert other include files here. */

/* TODO: insert other definitions and declarations here. */


/* CH0_TCD0 destination address extern definition */
uint32_t dstAddr[5] = {0};
uint32_t dstAddr2[5] = {0};

uint32_t sensor_array[3072] = {0};

/* DMA0 callback function*/
 void DMA_callback_testf(struct _dma_handle * handle, void *param, bool transferDone, uint32_t tcds) {

	 if (transferDone)
	     {

	     	printf("DMA called \n");
	     	printf("tcds : %d \n", tcds );

	     	printf("%u \t %u \t %u \t %u \t %u \n", dstAddr[0]&0xFFFF, dstAddr[1]&0xFFFF, dstAddr[2]&0xFFFF, dstAddr[3], dstAddr[4] );
	     	printf("%u \t %u \t %u \t %u \t %u \n", dstAddr2[0]&0xFFFF, dstAddr2[1]&0xFFFF, dstAddr2[2]&0xFFFF, dstAddr2[3], dstAddr2[4] );
			dstAddr[0] = 0;
	     	dstAddr[1] = 0;
	     	dstAddr[2] = 0;

	     	dstAddr2[0] = 0;
			dstAddr2[1] = 0;
			dstAddr2[2] = 0;
	     	printf("%u \t %u \t %u \n", dstAddr[0], dstAddr[1], dstAddr[2] );
	     	printf("%u \t %u \t %u \n", dstAddr2[0], dstAddr2[1], dstAddr2[2] );
	     }
 }

 /* ADC0_IRQn interrupt handler */
 void ADC0_IRQHANDLER(void) {
   /*  Place your code here */
   /* Add for ARM errata 838869, affects Cortex-M4, Cortex-M4F
      Store immediate overlapping exception return operation might vector to incorrect interrupt. */

	 printf("ADC ISR \n");
	 printf("RESFIFO[0] count %d \n", (ADC0->FCTRL[0])&0x1F); 	// Fcount 4:0    Watermark level 19:16
 }


/*
 * @brief   Application entry point.
 */
int main(void) {

    /* Init board hardware. */
    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitBootPeripherals();
#ifndef BOARD_INIT_DEBUG_CONSOLE_PERIPHERAL
    /* Init FSL debug console. */
    BOARD_InitDebugConsole();
#endif


    POWER_DisablePD(kPDRUNCFG_PD_LDOGPADC);	// Power on ADC
    PRINTF("Hello World\n");

    DMA_StartTransfer(&DMA0_CH0_Handle);

    /* Force the counter to be placed into memory. */
    volatile static int i = 0 ;
    /* Enter an infinite loop, just incrementing a counter. */
    while(1) {
    	i++ ;



    	/* 'Dummy' NOP to allow source level single stepping of
            tight while() loop */
        __asm volatile ("nop");
    }
    return 0 ;
}
