################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DIO_program.c \
../Dimmer.c \
../LeftDoorApp.c \
../LightingSwc.c \
../RightDoorApp.c \
../main.c \
../rte2Ecus.c 

OBJS += \
./DIO_program.o \
./Dimmer.o \
./LeftDoorApp.o \
./LightingSwc.o \
./RightDoorApp.o \
./main.o \
./rte2Ecus.o 

C_DEPS += \
./DIO_program.d \
./Dimmer.d \
./LeftDoorApp.d \
./LightingSwc.d \
./RightDoorApp.d \
./main.d \
./rte2Ecus.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=12000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


