CC=arm-none-eabi-
CFLAGS= -mcpu=cortex-m4 -mthumb -g
INCS= -I .
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
Project_name=Lab3_cortexM4

all: $(Project_name).bin
	@echo "======DONE======"

%.o: %.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@

$(Project_name).elf: $(OBJ) 
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) -o $@ -Map=Mapfile.map
	cp $(Project_name).elf $(Project_name).axf

$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@

clean:
	rm *.o *.elf *.bin *.axf *.map