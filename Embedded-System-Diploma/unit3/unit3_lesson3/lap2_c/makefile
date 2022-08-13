
CC=arm-none-eabi-
CFLAGS=-gdwarf-2 -mcpu=cortex-m3	
INCS=-I .
LIBS=
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
AS= $(wildcard *.s)
ASOBJ= $(AS:.s=.o)	
Project_name=learn-in-depth-cortex-m3
all: $(Project_name).hex	
	@echo "----------------DONE--------------------"



%.o: %.c
	$(CC)gcc.exe -c $(INCS) $(CFLAGS)  $< -o $@

$(Project_name).elf: $(ASOBJ) $(OBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(ASOBJ) $(OBJ)  -o $@
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(ASOBJ) $(OBJ)  -o $@ -Map=Map_file.map	

$(Project_name).hex: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@

clean:
	rm *.elf *bin	

clean_all:
	rm *.elf *bin *.o