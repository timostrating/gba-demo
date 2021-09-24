PATH   := $(DEVKITARM)/bin:$(PATH)

main.gba : main.c
	arm-none-eabi-gcc -mthumb -mthumb-interwork -c main.c
	arm-none-eabi-gcc -specs=gba.specs -mthumb -mthumb-interwork main.o -o main.elf
	arm-none-eabi-objcopy -O binary main.elf main.gba
	gbafix main.gba