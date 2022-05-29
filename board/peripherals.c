/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Peripherals v11.0
processor: LPC55S69
package_id: LPC55S69JBD100
mcu_data: ksdk2_0
processor_version: 11.0.1
board: LPCXpresso55S69
functionalGroups:
- name: BOARD_InitPeripherals_cm33_core0
  UUID: 61d0725d-b300-49cb-9c66-b5edfbf8ffc1
  called_from_default_init: true
  selectedCore: cm33_core0
- name: BOARD_InitPeripherals_cm33_core1
  UUID: e2041cd4-ebb6-45a5-807f-e0c2dc047d48
  selectedCore: cm33_core1
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'system'
- type_id: 'system'
- global_system_definitions:
  - user_definitions: ''
  - user_includes: ''
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'uart_cmsis_common'
- type_id: 'uart_cmsis_common_9cb8e302497aa696fdbb5a4fd622c2a8'
- global_USART_CMSIS_common:
  - quick_selection: 'default'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'gpio_adapter_common'
- type_id: 'gpio_adapter_common_57579b9ac814fe26bf95df0a384c36b6'
- global_gpio_adapter_common:
  - quick_selection: 'default'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "peripherals.h"

/***********************************************************************************************************************
 * BOARD_InitPeripherals_cm33_core0 functional group
 **********************************************************************************************************************/
/***********************************************************************************************************************
 * DMA0 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'DMA0'
- type: 'lpc_dma'
- mode: 'basic'
- custom_name_enabled: 'false'
- type_id: 'lpc_dma_c13ca997a68f2ca6c666916ba13db7d7'
- functional_group: 'BOARD_InitPeripherals_cm33_core0'
- peripheral: 'DMA0'
- config_sets:
  - fsl_dma:
    - dma_table:
      - 0: []
    - dma_channels:
      - 0:
        - apiMode: 'trans'
        - dma_channel:
          - channel_prefix_id: 'CH0'
          - DMA_source: 'kDma0RequestADC0FIFO0'
          - init_channel_priority: 'true'
          - dma_priority: 'kDMA_ChannelPriority0'
          - enable_custom_name: 'false'
        - peripheral_request: 'true'
        - init_trigger_config: 'true'
        - trigger_config:
          - type: 'kDMA_LowLevelTrigger'
          - burst: 'kDMA_SingleTransfer'
          - wrap: 'kDMA_NoWrap'
        - trans_config:
          - init_callback: 'true'
          - callback_function: 'DMA_callback_testf'
          - callback_user_data: ''
        - tcd_config:
          - 0:
            - tcdID: 'CH0_TCD0'
            - linkToNextTCD: '1'
            - transferCfg:
              - reload: 'true'
              - clrTrig: 'true'
              - intA: 'true'
              - intB: 'false'
              - width: 'kDMA_Transfer32BitWidth'
              - srcInc: 'kDMA_AddressInterleave0xWidth'
              - dstInc: 'kDMA_AddressInterleave1xWidth'
              - transBytes: '12'
            - srcAddr:
              - addrType: 'startAddr'
              - addr_expr: '(uint32_t)(&(ADC0->RESFIFO[0]))'
              - addr_def: ''
            - dstAddr:
              - addrType: 'startAddr'
              - addr_expr: 'dstAddr'
              - addr_def: 'uint32_t dstAddr[5]'
          - 1:
            - tcdID: 'CH0_TCD1'
            - linkToNextTCD: '0'
            - transferCfg:
              - reload: 'true'
              - clrTrig: 'true'
              - intA: 'true'
              - intB: 'false'
              - width: 'kDMA_Transfer32BitWidth'
              - srcInc: 'kDMA_AddressInterleave0xWidth'
              - dstInc: 'kDMA_AddressInterleave1xWidth'
              - transBytes: '12'
            - srcAddr:
              - addrType: 'startAddr'
              - addr_expr: '(uint32_t)(&(ADC0->RESFIFO[0]))'
              - addr_def: ''
            - dstAddr:
              - addrType: 'startAddr'
              - addr_expr: 'dstAddr2'
              - addr_def: 'uint32_t dstAddr2[5]'
        - allocateTCD: 'cache'
        - initTCD: 'CH0_TCD0'
    - dma_interrupt_trans:
      - IRQn: 'DMA0_IRQn'
      - enable_priority: 'true'
      - priority: '0'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

  /* Channel CH0 global variables */
dma_handle_t DMA0_CH0_Handle;
const dma_channel_trigger_t DMA0_CH0_trigger_config = {
  .type = kDMA_LowLevelTrigger,
  .burst = kDMA_SingleTransfer,
  .wrap = kDMA_NoWrap
};
SDK_ALIGN(dma_descriptor_t DMA0_CH0_TCDs_config[2], FSL_FEATURE_DMA_LINK_DESCRIPTOR_ALIGN_SIZE)
 = {
  {
    .xfercfg = DMA_CHANNEL_XFER(true, true, true, false, kDMA_Transfer32BitWidth, kDMA_AddressInterleave0xWidth, kDMA_AddressInterleave1xWidth, 12U),
    .srcEndAddr = (void *)DMA_DESCRIPTOR_END_ADDRESS((uint32_t)(&(ADC0->RESFIFO[0])), (uint32_t)kDMA_AddressInterleave0xWidth, 12U, (uint32_t)kDMA_Transfer32BitWidth),
    .dstEndAddr = (void *)DMA_DESCRIPTOR_END_ADDRESS(dstAddr, (uint32_t)kDMA_AddressInterleave1xWidth, 12U, (uint32_t)kDMA_Transfer32BitWidth),
    .linkToNextDesc = &DMA0_CH0_TCD1_config
  },
  {
    .xfercfg = DMA_CHANNEL_XFER(true, true, true, false, kDMA_Transfer32BitWidth, kDMA_AddressInterleave0xWidth, kDMA_AddressInterleave1xWidth, 12U),
    .srcEndAddr = (void *)DMA_DESCRIPTOR_END_ADDRESS((uint32_t)(&(ADC0->RESFIFO[0])), (uint32_t)kDMA_AddressInterleave0xWidth, 12U, (uint32_t)kDMA_Transfer32BitWidth),
    .dstEndAddr = (void *)DMA_DESCRIPTOR_END_ADDRESS(dstAddr2, (uint32_t)kDMA_AddressInterleave1xWidth, 12U, (uint32_t)kDMA_Transfer32BitWidth),
    .linkToNextDesc = &DMA0_CH0_TCD0_config
  }
};

static void DMA0_init(void) {
  /* Interrupt vector DMA0_IRQn priority settings in the NVIC. */
  NVIC_SetPriority(DMA0_IRQN, DMA0_IRQ_PRIORITY);

  /* Channel CH0 initialization */
  /* Enable the DMA 21 channel in the DMA */
  DMA_EnableChannel(DMA0_DMA_BASEADDR, DMA0_CH0_DMA_CHANNEL);
  /* Set the DMA 21 channel priority */
  DMA_SetChannelPriority(DMA0_DMA_BASEADDR, DMA0_CH0_DMA_CHANNEL, kDMA_ChannelPriority0);
  /* Create the DMA DMA0_CH0_Handle handle */
  DMA_CreateHandle(&DMA0_CH0_Handle, DMA0_DMA_BASEADDR, DMA0_CH0_DMA_CHANNEL);
  DMA_SetCallback(&DMA0_CH0_Handle, DMA_callback_testf, NULL);
  /* Configuration of the channel trigger and peripheral request */
  DMA_SetChannelConfig(DMA0_DMA_BASEADDR, DMA0_CH0_DMA_CHANNEL, (dma_channel_trigger_t *)&DMA0_CH0_trigger_config, true);
  /* DMA0 transfer submit */
  DMA_SubmitChannelDescriptor(&DMA0_CH0_Handle, &DMA0_CH0_TCD0_config);
}

/***********************************************************************************************************************
 * NVIC initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'NVIC'
- type: 'nvic'
- mode: 'general'
- custom_name_enabled: 'false'
- type_id: 'nvic_57b5eef3774cc60acaede6f5b8bddc67'
- functional_group: 'BOARD_InitPeripherals_cm33_core0'
- peripheral: 'NVIC'
- config_sets:
  - nvic:
    - interrupt_table:
      - 0: []
      - 1: []
    - interrupts: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/* Empty initialization function (commented out)
static void NVIC_init(void) {
} */

/***********************************************************************************************************************
 * ADC0 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'ADC0'
- type: 'lpadc'
- mode: 'LPADC'
- custom_name_enabled: 'false'
- type_id: 'lpadc_ddcc12878b96237847ab78b571214e1c'
- functional_group: 'BOARD_InitPeripherals_cm33_core0'
- peripheral: 'ADC0'
- config_sets:
  - fsl_lpadc:
    - lpadcConfig:
      - clockSource: 'AsynchronousFunctionClock'
      - clockSourceFreq: 'BOARD_BootClockPLL150M'
      - enableInDozeMode: 'true'
      - conversionAverageMode: 'kLPADC_ConversionAverage1'
      - offsetCalibration: 'no'
      - autoCalibrate: 'true'
      - enableAnalogPreliminary: 'true'
      - powerUpDelay: '0x80'
      - referenceVoltageSource: 'kLPADC_ReferenceVoltageAlt2'
      - powerLevelMode: 'kLPADC_PowerLevelAlt4'
      - triggerPriorityPolicy: 'kLPADC_TriggerPriorityPreemptImmediately'
      - enableConvPause: 'false'
      - convPauseDelay: '0'
      - FIFO0Watermark: '5'
      - FIFO1Watermark: '0'
      - FIFO0WatermarkDMA: 'true'
      - FIFO1WatermarkDMA: 'false'
    - lpadcConvCommandConfig:
      - 0:
        - user_commandId: ''
        - commandId: '1'
        - chainedNextCommandNumber: '2'
        - sampleChannelMode: 'kLPADC_SampleChannelDiffBothSide'
        - channelNumber: 'CH.0'
        - enableAutoChannelIncrement: 'false'
        - loopCount: '0'
        - hardwareAverageMode: 'kLPADC_HardwareAverageCount1'
        - sampleTimeMode: 'kLPADC_SampleTimeADCK3'
        - hardwareCompareMode: 'kLPADC_HardwareCompareDisabled'
        - hardwareCompareValueHigh: '0'
        - hardwareCompareValueLow: '0'
        - conversionResoultuionMode: 'kLPADC_ConversionResolutionHigh'
        - enableWaitTrigger: 'false'
      - 1:
        - user_commandId: ''
        - commandId: '2'
        - chainedNextCommandNumber: '3'
        - sampleChannelMode: 'kLPADC_SampleChannelDiffBothSide'
        - channelNumber: 'CH.3'
        - enableAutoChannelIncrement: 'false'
        - loopCount: '0'
        - hardwareAverageMode: 'kLPADC_HardwareAverageCount1'
        - sampleTimeMode: 'kLPADC_SampleTimeADCK3'
        - hardwareCompareMode: 'kLPADC_HardwareCompareDisabled'
        - hardwareCompareValueHigh: '0'
        - hardwareCompareValueLow: '0'
        - conversionResoultuionMode: 'kLPADC_ConversionResolutionHigh'
        - enableWaitTrigger: 'false'
      - 2:
        - user_commandId: ''
        - commandId: '3'
        - chainedNextCommandNumber: '0'
        - sampleChannelMode: 'kLPADC_SampleChannelDiffBothSide'
        - channelNumber: 'CH.4'
        - enableAutoChannelIncrement: 'false'
        - loopCount: '0'
        - hardwareAverageMode: 'kLPADC_HardwareAverageCount1'
        - sampleTimeMode: 'kLPADC_SampleTimeADCK3'
        - hardwareCompareMode: 'kLPADC_HardwareCompareDisabled'
        - hardwareCompareValueHigh: '0'
        - hardwareCompareValueLow: '0'
        - conversionResoultuionMode: 'kLPADC_ConversionResolutionHigh'
        - enableWaitTrigger: 'false'
    - lpadcConvTriggerConfig:
      - 0:
        - user_triggerId: ''
        - triggerId: '2'
        - targetCommandId: '1'
        - delayPower: '0'
        - priority: 'true'
        - channelAFIFOSelect: '0'
        - channelBFIFOSelect: '1'
        - enableHardwareTrigger: 'true'
    - IRQ_cfg:
      - interrupt_type: 'kLPADC_FIFO0WatermarkInterruptEnable'
      - enable_irq: 'true'
      - adc_interrupt:
        - IRQn: 'ADC0_IRQn'
        - enable_interrrupt: 'enabled'
        - enable_priority: 'true'
        - priority: '0'
        - enable_custom_name: 'false'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
const lpadc_config_t ADC0_config = {
  .enableInDozeMode = true,
  .conversionAverageMode = kLPADC_ConversionAverage1,
  .enableAnalogPreliminary = true,
  .powerUpDelay = 0x80UL,
  .referenceVoltageSource = kLPADC_ReferenceVoltageAlt2,
  .powerLevelMode = kLPADC_PowerLevelAlt4,
  .triggerPriorityPolicy = kLPADC_TriggerPriorityPreemptImmediately,
  .enableConvPause = false,
  .convPauseDelay = 0UL,
  .FIFO0Watermark = 5UL,
  .FIFO1Watermark = 0UL
};
lpadc_conv_command_config_t ADC0_commandsConfig[3] = {
  {
    .sampleChannelMode = kLPADC_SampleChannelDiffBothSide,
    .channelNumber = 0U,
    .chainedNextCommandNumber = 2,
    .enableAutoChannelIncrement = false,
    .loopCount = 0UL,
    .hardwareAverageMode = kLPADC_HardwareAverageCount1,
    .sampleTimeMode = kLPADC_SampleTimeADCK3,
    .hardwareCompareMode = kLPADC_HardwareCompareDisabled,
    .hardwareCompareValueHigh = 0UL,
    .hardwareCompareValueLow = 0UL,
    .conversionResolutionMode = kLPADC_ConversionResolutionHigh,
    .enableWaitTrigger = false
  },
  {
    .sampleChannelMode = kLPADC_SampleChannelDiffBothSide,
    .channelNumber = 3U,
    .chainedNextCommandNumber = 3,
    .enableAutoChannelIncrement = false,
    .loopCount = 0UL,
    .hardwareAverageMode = kLPADC_HardwareAverageCount1,
    .sampleTimeMode = kLPADC_SampleTimeADCK3,
    .hardwareCompareMode = kLPADC_HardwareCompareDisabled,
    .hardwareCompareValueHigh = 0UL,
    .hardwareCompareValueLow = 0UL,
    .conversionResolutionMode = kLPADC_ConversionResolutionHigh,
    .enableWaitTrigger = false
  },
  {
    .sampleChannelMode = kLPADC_SampleChannelDiffBothSide,
    .channelNumber = 4U,
    .chainedNextCommandNumber = 0,
    .enableAutoChannelIncrement = false,
    .loopCount = 0UL,
    .hardwareAverageMode = kLPADC_HardwareAverageCount1,
    .sampleTimeMode = kLPADC_SampleTimeADCK3,
    .hardwareCompareMode = kLPADC_HardwareCompareDisabled,
    .hardwareCompareValueHigh = 0UL,
    .hardwareCompareValueLow = 0UL,
    .conversionResolutionMode = kLPADC_ConversionResolutionHigh,
    .enableWaitTrigger = false
  }
};
lpadc_conv_trigger_config_t ADC0_triggersConfig[1] = {
  {
    .targetCommandId = 1,
    .delayPower = 0UL,
    .channelAFIFOSelect = 0,
    .channelBFIFOSelect = 1,
    .priority = 0,
    .enableHardwareTrigger = true
  }
};

static void ADC0_init(void) {
  /* Initialize LPADC converter */
  LPADC_Init(ADC0_PERIPHERAL, &ADC0_config);
  /* Perform auto calibration */
  LPADC_DoAutoCalibration(ADC0_PERIPHERAL);
  /* Enable DMA request on FIFO 0 watermark event */
  LPADC_EnableFIFO0WatermarkDMA(ADC0_PERIPHERAL, true);
  /* Configure conversion command 1. */
  LPADC_SetConvCommandConfig(ADC0_PERIPHERAL, 1, &ADC0_commandsConfig[0]);
  /* Configure conversion command 2. */
  LPADC_SetConvCommandConfig(ADC0_PERIPHERAL, 2, &ADC0_commandsConfig[1]);
  /* Configure conversion command 3. */
  LPADC_SetConvCommandConfig(ADC0_PERIPHERAL, 3, &ADC0_commandsConfig[2]);
  /* Configure trigger 2. */
  LPADC_SetConvTriggerConfig(ADC0_PERIPHERAL, 2, &ADC0_triggersConfig[0]);
  /* Interrupt vector ADC0_IRQn priority settings in the NVIC. */
  NVIC_SetPriority(ADC0_IRQN, ADC0_IRQ_PRIORITY);
  /* Enable interrupts from LPADC */
  LPADC_EnableInterrupts(ADC0_PERIPHERAL, (kLPADC_FIFO0WatermarkInterruptEnable));
  /* Enable interrupt ADC0_IRQn request in the NVIC. */
  EnableIRQ(ADC0_IRQN);
}

/***********************************************************************************************************************
 * SCT0 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'SCT0'
- type: 'sctimer'
- mode: 'basic'
- custom_name_enabled: 'false'
- type_id: 'sctimer_7973000102117ff9c4fa4742aaf3ccb0'
- functional_group: 'BOARD_InitPeripherals_cm33_core0'
- peripheral: 'SCT0'
- config_sets:
  - main:
    - config:
      - clockMode: 'kSCTIMER_System_ClockMode'
      - clockSource: 'SynchronousFunctionClock'
      - clockSourceFreq: 'BOARD_BootClockFRO12M'
      - SCTInputClockSourceFreq: 'custom:0'
      - clockSelect: 'kSCTIMER_Clock_On_Rise_Input_0'
      - enableCounterUnify: 'false'
      - enableBidirection_l: 'false'
      - enableBidirection_h: 'false'
      - prescale_l: '240'
      - prescale_h: '240'
      - outInitState: 'SCTIMER_OUTPUT_0_MASK SCTIMER_OUTPUT_3_MASK'
      - inputsync: ''
    - enableIRQ: 'false'
    - interrupt:
      - IRQn: 'SCT0_IRQn'
      - enable_interrrupt: 'enabled'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - enableLTimer: 'true'
    - enableHTimer: 'false'
    - pwms: []
    - pwmMode: 'kSCTIMER_EdgeAlignedPwm'
    - pwmFrequency: '0'
    - events:
      - 0:
        - type: 'kSCTIMER_MatchEventOnly'
        - matchValue: '100000'
        - counter: 'kSCTIMER_Counter_L'
        - actions:
          - 0:
            - action: 'NextState'
            - nextState: '1'
          - 1:
            - action: 'CounterLimit'
            - counter: 'kSCTIMER_Counter_L'
          - 2:
            - action: 'OutputToggle'
            - output: 'kSCTIMER_Out_0'
      - 1:
        - type: 'kSCTIMER_MatchEventOnly'
        - matchValue: '100000'
        - counter: 'kSCTIMER_Counter_L'
        - actions:
          - 0:
            - action: 'NextState'
            - nextState: '2'
          - 1:
            - action: 'CounterLimit'
            - counter: 'kSCTIMER_Counter_L'
          - 2:
            - action: 'OutputToggle'
            - output: 'kSCTIMER_Out_0'
      - 2:
        - type: 'kSCTIMER_MatchEventOnly'
        - matchValue: '100000'
        - counter: 'kSCTIMER_Counter_L'
        - actions:
          - 0:
            - action: 'NextState'
            - nextState: '3'
          - 1:
            - action: 'CounterLimit'
            - counter: 'kSCTIMER_Counter_L'
          - 2:
            - action: 'OutputToggle'
            - output: 'kSCTIMER_Out_0'
      - 3:
        - type: 'kSCTIMER_MatchEventOnly'
        - matchValue: '100000'
        - counter: 'kSCTIMER_Counter_L'
        - actions:
          - 0:
            - action: 'NextState'
            - nextState: '4'
          - 1:
            - action: 'CounterLimit'
            - counter: 'kSCTIMER_Counter_L'
          - 2:
            - action: 'OutputToggle'
            - output: 'kSCTIMER_Out_0'
      - 4:
        - type: 'kSCTIMER_MatchEventOnly'
        - matchValue: '100000'
        - counter: 'kSCTIMER_Counter_L'
        - actions:
          - 0:
            - action: 'NextState'
            - nextState: '5'
          - 1:
            - action: 'CounterLimit'
            - counter: 'kSCTIMER_Counter_L'
          - 2:
            - action: 'OutputToggle'
            - output: 'kSCTIMER_Out_0'
      - 5:
        - type: 'kSCTIMER_MatchEventOnly'
        - matchValue: '100000'
        - counter: 'kSCTIMER_Counter_L'
        - actions:
          - 0:
            - action: 'NextState'
            - nextState: '6'
          - 1:
            - action: 'OutputToggle'
            - output: 'kSCTIMER_Out_0'
          - 2:
            - action: 'CounterLimit'
            - counter: 'kSCTIMER_Counter_L'
      - 6:
        - type: 'kSCTIMER_MatchEventOnly'
        - matchValue: '1000000'
        - counter: 'kSCTIMER_Counter_L'
        - actions:
          - 0:
            - action: 'NextState'
            - nextState: '7'
          - 1:
            - action: 'CounterLimit'
            - counter: 'kSCTIMER_Counter_L'
      - 7:
        - type: 'kSCTIMER_MatchEventOnly'
        - matchValue: '100000'
        - counter: 'kSCTIMER_Counter_L'
        - actions:
          - 0:
            - action: 'NextState'
            - nextState: '8'
          - 1:
            - action: 'CounterLimit'
            - counter: 'kSCTIMER_Counter_L'
          - 2:
            - action: 'OutputSet'
            - output: 'kSCTIMER_Out_4'
          - 3:
            - action: 'OutputClear'
            - output: 'kSCTIMER_Out_3'
      - 8:
        - type: 'kSCTIMER_MatchEventOnly'
        - matchValue: '100000'
        - counter: 'kSCTIMER_Counter_L'
        - actions:
          - 0:
            - action: 'NextState'
            - nextState: '9'
          - 1:
            - action: 'CounterLimit'
            - counter: 'kSCTIMER_Counter_L'
          - 2:
            - action: 'OutputClear'
            - output: 'kSCTIMER_Out_4'
          - 3:
            - action: 'OutputSet'
            - output: 'kSCTIMER_Out_3'
      - 9:
        - type: 'kSCTIMER_MatchEventOnly'
        - matchValue: '1000000'
        - counter: 'kSCTIMER_Counter_L'
        - actions:
          - 0:
            - action: 'NextState'
            - nextState: '0'
          - 1:
            - action: 'CounterLimit'
            - counter: 'kSCTIMER_Counter_L'
          - 2:
            - action: 'DmaTrigger'
            - dmaRequest: '21'
    - states:
      - 0:
        - events: 'event0'
      - 1:
        - events: 'event1'
      - 2:
        - events: 'event2'
      - 3:
        - events: 'event3'
      - 4:
        - events: 'event4'
      - 5:
        - events: 'event5'
      - 6:
        - events: 'event6'
      - 7:
        - events: 'event7'
      - 8:
        - events: 'event8'
      - 9:
        - events: 'event9'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
const sctimer_config_t SCT0_initConfig = {
  .enableCounterUnify = false,
  .clockMode = kSCTIMER_System_ClockMode,
  .clockSelect = kSCTIMER_Clock_On_Rise_Input_0,
  .enableBidirection_l = false,
  .enableBidirection_h = false,
  .prescale_l = 239U,
  .prescale_h = 239U,
  .outInitState = (uint8_t)(SCT0_OUTPUT_0 | SCT0_OUTPUT_3),
  .inputsync = 0U
};
uint32_t SCT0_event[10];

static void SCT0_init(void) {
  SCTIMER_Init(SCT0_PERIPHERAL, &SCT0_initConfig);
  /* Initialization of state 0 */
  SCTIMER_CreateAndScheduleEvent(SCT0_PERIPHERAL, kSCTIMER_MatchEventOnly, 100000, kSCTIMER_Out_0, kSCTIMER_Counter_L, &SCT0_event[0]);
  SCTIMER_SetupNextStateAction(SCT0_PERIPHERAL, 1, SCT0_event[0]);
  SCTIMER_SetupCounterLimitAction(SCT0_PERIPHERAL, kSCTIMER_Counter_L, SCT0_event[0]);
  SCTIMER_SetupOutputToggleAction(SCT0_PERIPHERAL, kSCTIMER_Out_0, SCT0_event[0]);
  SCTIMER_IncreaseState(SCT0_PERIPHERAL);
  /* Initialization of state 1 */
  SCTIMER_CreateAndScheduleEvent(SCT0_PERIPHERAL, kSCTIMER_MatchEventOnly, 100000, kSCTIMER_Out_0, kSCTIMER_Counter_L, &SCT0_event[1]);
  SCTIMER_SetupNextStateAction(SCT0_PERIPHERAL, 2, SCT0_event[1]);
  SCTIMER_SetupCounterLimitAction(SCT0_PERIPHERAL, kSCTIMER_Counter_L, SCT0_event[1]);
  SCTIMER_SetupOutputToggleAction(SCT0_PERIPHERAL, kSCTIMER_Out_0, SCT0_event[1]);
  SCTIMER_IncreaseState(SCT0_PERIPHERAL);
  /* Initialization of state 2 */
  SCTIMER_CreateAndScheduleEvent(SCT0_PERIPHERAL, kSCTIMER_MatchEventOnly, 100000, kSCTIMER_Out_0, kSCTIMER_Counter_L, &SCT0_event[2]);
  SCTIMER_SetupNextStateAction(SCT0_PERIPHERAL, 3, SCT0_event[2]);
  SCTIMER_SetupCounterLimitAction(SCT0_PERIPHERAL, kSCTIMER_Counter_L, SCT0_event[2]);
  SCTIMER_SetupOutputToggleAction(SCT0_PERIPHERAL, kSCTIMER_Out_0, SCT0_event[2]);
  SCTIMER_IncreaseState(SCT0_PERIPHERAL);
  /* Initialization of state 3 */
  SCTIMER_CreateAndScheduleEvent(SCT0_PERIPHERAL, kSCTIMER_MatchEventOnly, 100000, kSCTIMER_Out_0, kSCTIMER_Counter_L, &SCT0_event[3]);
  SCTIMER_SetupNextStateAction(SCT0_PERIPHERAL, 4, SCT0_event[3]);
  SCTIMER_SetupCounterLimitAction(SCT0_PERIPHERAL, kSCTIMER_Counter_L, SCT0_event[3]);
  SCTIMER_SetupOutputToggleAction(SCT0_PERIPHERAL, kSCTIMER_Out_0, SCT0_event[3]);
  SCTIMER_IncreaseState(SCT0_PERIPHERAL);
  /* Initialization of state 4 */
  SCTIMER_CreateAndScheduleEvent(SCT0_PERIPHERAL, kSCTIMER_MatchEventOnly, 100000, kSCTIMER_Out_0, kSCTIMER_Counter_L, &SCT0_event[4]);
  SCTIMER_SetupNextStateAction(SCT0_PERIPHERAL, 5, SCT0_event[4]);
  SCTIMER_SetupCounterLimitAction(SCT0_PERIPHERAL, kSCTIMER_Counter_L, SCT0_event[4]);
  SCTIMER_SetupOutputToggleAction(SCT0_PERIPHERAL, kSCTIMER_Out_0, SCT0_event[4]);
  SCTIMER_IncreaseState(SCT0_PERIPHERAL);
  /* Initialization of state 5 */
  SCTIMER_CreateAndScheduleEvent(SCT0_PERIPHERAL, kSCTIMER_MatchEventOnly, 100000, kSCTIMER_Out_0, kSCTIMER_Counter_L, &SCT0_event[5]);
  SCTIMER_SetupNextStateAction(SCT0_PERIPHERAL, 6, SCT0_event[5]);
  SCTIMER_SetupOutputToggleAction(SCT0_PERIPHERAL, kSCTIMER_Out_0, SCT0_event[5]);
  SCTIMER_SetupCounterLimitAction(SCT0_PERIPHERAL, kSCTIMER_Counter_L, SCT0_event[5]);
  SCTIMER_IncreaseState(SCT0_PERIPHERAL);
  /* Initialization of state 6 */
  SCTIMER_CreateAndScheduleEvent(SCT0_PERIPHERAL, kSCTIMER_MatchEventOnly, 1000000, kSCTIMER_Out_0, kSCTIMER_Counter_L, &SCT0_event[6]);
  SCTIMER_SetupNextStateAction(SCT0_PERIPHERAL, 7, SCT0_event[6]);
  SCTIMER_SetupCounterLimitAction(SCT0_PERIPHERAL, kSCTIMER_Counter_L, SCT0_event[6]);
  SCTIMER_IncreaseState(SCT0_PERIPHERAL);
  /* Initialization of state 7 */
  SCTIMER_CreateAndScheduleEvent(SCT0_PERIPHERAL, kSCTIMER_MatchEventOnly, 100000, kSCTIMER_Out_0, kSCTIMER_Counter_L, &SCT0_event[7]);
  SCTIMER_SetupNextStateAction(SCT0_PERIPHERAL, 8, SCT0_event[7]);
  SCTIMER_SetupCounterLimitAction(SCT0_PERIPHERAL, kSCTIMER_Counter_L, SCT0_event[7]);
  SCTIMER_SetupOutputSetAction(SCT0_PERIPHERAL, kSCTIMER_Out_4, SCT0_event[7]);
  SCTIMER_SetupOutputClearAction(SCT0_PERIPHERAL, kSCTIMER_Out_3, SCT0_event[7]);
  SCTIMER_IncreaseState(SCT0_PERIPHERAL);
  /* Initialization of state 8 */
  SCTIMER_CreateAndScheduleEvent(SCT0_PERIPHERAL, kSCTIMER_MatchEventOnly, 100000, kSCTIMER_Out_0, kSCTIMER_Counter_L, &SCT0_event[8]);
  SCTIMER_SetupNextStateAction(SCT0_PERIPHERAL, 9, SCT0_event[8]);
  SCTIMER_SetupCounterLimitAction(SCT0_PERIPHERAL, kSCTIMER_Counter_L, SCT0_event[8]);
  SCTIMER_SetupOutputClearAction(SCT0_PERIPHERAL, kSCTIMER_Out_4, SCT0_event[8]);
  SCTIMER_SetupOutputSetAction(SCT0_PERIPHERAL, kSCTIMER_Out_3, SCT0_event[8]);
  SCTIMER_IncreaseState(SCT0_PERIPHERAL);
  /* Initialization of state 9 */
  SCTIMER_CreateAndScheduleEvent(SCT0_PERIPHERAL, kSCTIMER_MatchEventOnly, 1000000, kSCTIMER_Out_0, kSCTIMER_Counter_L, &SCT0_event[9]);
  SCTIMER_SetupNextStateAction(SCT0_PERIPHERAL, 0, SCT0_event[9]);
  SCTIMER_SetupCounterLimitAction(SCT0_PERIPHERAL, kSCTIMER_Counter_L, SCT0_event[9]);
  SCTIMER_SetupDmaTriggerAction(SCT0_PERIPHERAL, 21, SCT0_event[9]);
  SCTIMER_StartTimer(SCT0_PERIPHERAL, kSCTIMER_Counter_L);
}

/***********************************************************************************************************************
 * PLU initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'PLU'
- type: 'plu'
- mode: 'general'
- custom_name_enabled: 'false'
- type_id: 'plu_d13acf308f978dd160ff0193b735034d'
- functional_group: 'BOARD_InitPeripherals_cm33_core0'
- peripheral: 'PLU'
- config_sets:
  - fsl_plu:
    - enableFile: 'true'
    - pluFile:
      - pathStr: 'C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\PLU_code\plu_tool.c'
    - clockSettings:
      - clockSource: 'FunctionClock'
      - clockSourceFreq: 'BOARD_BootClockPLL150M'
    - interruptSettings:
      - interruptSources: ''
      - enableInterrupt: 'false'
      - interrupt:
        - IRQn: 'PLU_IRQn'
        - enable_interrrupt: 'enabled'
        - enable_priority: 'false'
        - priority: '0'
        - enable_custom_name: 'false'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

static void PLU_init(void) {
  /* PLU peripheral initialization */
  PLU_Init(PLU_PERIPHERAL);
  /* PLU PLU Configuration Tool initialization */
  /* 
   * This file was generated by the PLU Config Tool.
   * 6 Inputs 26 LUTs 4 flip flops and 8 outputs */
  
  /* LUT4 (CLK1_p) */
  PLU->LUT[4].INP_MUX[0] = 0x00000001; /* IN1 (CLKOUT_in) */
  PLU->LUT[4].INP_MUX[1] = 0x0000003F; /* default */
  PLU->LUT[4].INP_MUX[2] = 0x0000003F; /* default */
  PLU->LUT[4].INP_MUX[3] = 0x0000003F; /* default */
  PLU->LUT[4].INP_MUX[4] = 0x0000003F; /* default */
  PLU->LUT_TRUTH[4] = 0xaaaaaaaa; /* CLK1_p CUSTOM */
  
  /* LUT5 (CLK1_n) */
  PLU->LUT[5].INP_MUX[0] = 0x00000001; /* IN1 (CLKOUT_in) */
  PLU->LUT[5].INP_MUX[1] = 0x0000003F; /* default */
  PLU->LUT[5].INP_MUX[2] = 0x0000003F; /* default */
  PLU->LUT[5].INP_MUX[3] = 0x0000003F; /* default */
  PLU->LUT[5].INP_MUX[4] = 0x0000003F; /* default */
  PLU->LUT_TRUTH[5] = 0x55555555; /* CLK1_n CUSTOM */
  
  PLU->OUTPUT_MUX[0] = 0x00000005; /* LUT5 (CLK1_n) -> CLK1_n_PLU_OUT */
  PLU->OUTPUT_MUX[4] = 0x00000004; /* LUT4 (CLK1_p) -> CLK1_p_PLU_OUT */
  

}

/***********************************************************************************************************************
 * USB0 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'USB0'
- type: 'usb'
- mode: 'device'
- custom_name_enabled: 'false'
- type_id: 'usb_cbf31fb9a3cef21890d93e737c3d2690'
- functional_group: 'BOARD_InitPeripherals_cm33_core0'
- peripheral: 'USB0'
- config_sets:
  - deviceSetting:
    - vendor_id: '0x1FC9'
    - product_id: '0x0094'
    - manufacturer_string: 'NXP'
    - product_string: 'VCOM'
    - self_powered: 'true'
    - max_power: '100'
    - interfaces:
      - 0:
        - interface_class: 'kClassCic'
        - setting_cic:
          - interface_name: 'CIC VCOM'
          - subclass: 'kSubclassAcm'
          - protocol: 'kProtocolNone'
          - implementation: 'kImplementationCicVcom'
          - endpoints_settings:
            - 0:
              - setting_name: 'Default'
              - endpoints:
                - 0:
                  - direction: 'kIn'
                  - transfer_type: 'kInterrupt'
                  - synchronization: 'kNoSynchronization'
                  - usage: 'kData'
                  - max_packet_size_fs: 'k16'
                  - polling_interval_fs: '8'
                  - bRefresh: '0'
                  - bSynchAddress: 'NoSynchronization'
          - data_interface_count: '1'
          - quick_selection: 'QS_INTERFACE_CIC_VCOM'
      - 1:
        - interface_class: 'kClassDic'
        - setting_dic:
          - interface_name: 'DIC VCOM'
          - subclass: 'kSubclassNone'
          - protocol: 'kProtocolNone'
          - implementation: 'kImplementationDicVcom'
          - endpoints_settings:
            - 0:
              - setting_name: 'Default'
              - endpoints:
                - 0:
                  - direction: 'kIn'
                  - transfer_type: 'kBulk'
                  - synchronization: 'kNoSynchronization'
                  - usage: 'kData'
                  - max_packet_size_fs: 'k64'
                  - polling_interval_fs: '0'
                  - bRefresh: '0'
                  - bSynchAddress: 'NoSynchronization'
                - 1:
                  - direction: 'kOut'
                  - transfer_type: 'kBulk'
                  - synchronization: 'kNoSynchronization'
                  - usage: 'kData'
                  - max_packet_size_fs: 'k64'
                  - polling_interval_fs: '0'
                  - bRefresh: '0'
                  - bSynchAddress: 'NoSynchronization'
          - quick_selection: 'QS_INTERFACE_DIC_VCOM'
    - quick_selection: 'QS_DEVICE_CDC_VCOM'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

static void USB0_init(void) {
  USB_DeviceApplicationInit();
}

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
void BOARD_InitPeripherals_cm33_core0(void)
{
  /* Global initialization */
  DMA_Init(DMA0_DMA_BASEADDR);

  /* Initialize components */
  DMA0_init();
  ADC0_init();
  SCT0_init();
  PLU_init();
  USB0_init();
}

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void)
{
  BOARD_InitPeripherals_cm33_core0();
}
