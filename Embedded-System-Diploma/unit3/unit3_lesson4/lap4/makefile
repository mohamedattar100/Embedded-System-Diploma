
CC=arm-none-eabi-
CFLAGS=-gdwarf-2 -g -mcpu=cortex-m4	
INCS=-I .
LIBS=
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
AS= $(wildcard *.s)
ASOBJ= $(AS:.s=.o)	
Project_name=learn-in-depth-cortex-m4
all: $(Project_name).bin	
	@echo "----------------DONE--------------------"



%.o: %.c
	$(CC)gcc.exe -c $(INCS) $(CFLAGS)  $< -o $@

$(Project_name).elf: $(ASOBJ) $(OBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(ASOBJ) $(OBJ)  -o $@
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(ASOBJ) $(OBJ)  -o $@ -Map=Map_file.map
	
$(Project_name).axf: $(Project_name).elf
	cp $(Project_name).elf $(Project_name).axf

$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@

clean:
	rm *.elf *bin	

clean_all:
	rm *.elf *bin *.o