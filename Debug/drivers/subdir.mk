################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/fsl_clock.c \
../drivers/fsl_common.c \
../drivers/fsl_common_arm.c \
../drivers/fsl_dma.c \
../drivers/fsl_flexcomm.c \
../drivers/fsl_gpio.c \
../drivers/fsl_i2c.c \
../drivers/fsl_lpadc.c \
../drivers/fsl_power.c \
../drivers/fsl_reset.c \
../drivers/fsl_sctimer.c \
../drivers/fsl_usart.c 

OBJS += \
./drivers/fsl_clock.o \
./drivers/fsl_common.o \
./drivers/fsl_common_arm.o \
./drivers/fsl_dma.o \
./drivers/fsl_flexcomm.o \
./drivers/fsl_gpio.o \
./drivers/fsl_i2c.o \
./drivers/fsl_lpadc.o \
./drivers/fsl_power.o \
./drivers/fsl_reset.o \
./drivers/fsl_sctimer.o \
./drivers/fsl_usart.o 

C_DEPS += \
./drivers/fsl_clock.d \
./drivers/fsl_common.d \
./drivers/fsl_common_arm.d \
./drivers/fsl_dma.d \
./drivers/fsl_flexcomm.d \
./drivers/fsl_gpio.d \
./drivers/fsl_i2c.d \
./drivers/fsl_lpadc.d \
./drivers/fsl_power.d \
./drivers/fsl_reset.d \
./drivers/fsl_sctimer.d \
./drivers/fsl_usart.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/%.o: ../drivers/%.c drivers/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DCPU_LPC55S69JBD100 -DCPU_LPC55S69JBD100_cm33 -DCPU_LPC55S69JBD100_cm33_core0 -DSDK_OS_BAREMETAL -DSERIAL_PORT_TYPE_UART=1 -DSDK_DEBUGCONSOLE=0 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\board" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\source" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\drivers" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\utilities" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\component\uart" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\component\serial_manager" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\component\lists" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\startup" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\CMSIS" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\device" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m33 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


