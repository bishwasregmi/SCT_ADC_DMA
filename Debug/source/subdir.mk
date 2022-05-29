################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../source/LPC55S69_Project_SCT_ADC_DMA.c \
../source/semihost_hardfault.c \
../source/usb_device_interface_0_cic_vcom.c 

OBJS += \
./source/LPC55S69_Project_SCT_ADC_DMA.o \
./source/semihost_hardfault.o \
./source/usb_device_interface_0_cic_vcom.o 

C_DEPS += \
./source/LPC55S69_Project_SCT_ADC_DMA.d \
./source/semihost_hardfault.d \
./source/usb_device_interface_0_cic_vcom.d 


# Each subdirectory must supply rules for building sources it contributes
source/%.o: ../source/%.c source/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DCPU_LPC55S69JBD100 -DCPU_LPC55S69JBD100_cm33 -DCPU_LPC55S69JBD100_cm33_core0 -DSDK_OS_BAREMETAL -DSERIAL_PORT_TYPE_UART=1 -DSDK_DEBUGCONSOLE=0 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\drivers" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\utilities" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\component\uart" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\component\serial_manager" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\component\lists" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\usb\device\source\lpcip3511" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\usb\include" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\usb\device\include" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\usb\device\source" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\component\osa" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\usb\device\class\cdc" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\usb\output\source\device\class" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\usb\device\class" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\usb\output\source\device" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\usb\host" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\source\generated" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\CMSIS" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\device" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\drivers" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\utilities" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\component\uart" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\component\serial_manager" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\component\lists" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\usb\device\source\lpcip3511" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\usb\include" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\usb\device\include" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\usb\device\source" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\component\osa" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\usb\device\class\cdc" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\usb\output\source\device\class" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\usb\device\class" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\usb\output\source\device" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\usb\host" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\source\generated" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\CMSIS" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\device" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\board" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\source" -I"C:\Users\Bishwas\Documents\MCUXpressoIDE_11.5.0_7232\workspace\LPC55S69_Project_SCT_ADC_DMA\startup" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m33 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


