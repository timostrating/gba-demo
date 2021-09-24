# before doing this install https://devkitpro.org/



# Compile main.c to main.o
arm-none-eabi-gcc -mthumb -mthumb-interwork -c main.c

# Link main.o (and standard libs) to main.elf
arm-none-eabi-gcc -specs=gba.specs -mthumb -mthumb-interwork main.o -o main.elf

# Strip to binary-only (remove debug data from elf file to make it run on official hardware)
arm-none-eabi-objcopy -O binary main.elf main.gba

# A gba rom needs a valid checksum to make it run on official hardware
gbafix main.gba





# In depth explanation can be found at https://www.coranac.com/tonc/text/setup.htm#sssec-build-steps