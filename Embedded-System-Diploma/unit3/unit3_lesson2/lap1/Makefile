
learn-in-depth.bin: app.c uart.c startup.s
	arm-none-eabi-as.exe -mcpu=arm926ej-s -g startup.s -o startup.o
	arm-none-eabi-gcc.exe -c -I . -mcpu=arm926ej-s -g uart.c -o uart.o
	arm-none-eabi-gcc.exe -c -I . -mcpu=arm926ej-s -g app.c -o app.o
	arm-none-eabi-ld.exe -T linker_script.ld startup.o app.o uart.o -o learn-in-depth.elf
	arm-none-eabi-objcopy.exe -O binary learn-in-depth.elf learn-in-depth.bin