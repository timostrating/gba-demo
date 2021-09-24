// stolen from https://www.coranac.com/tonc/text/keys.htm
typedef unsigned int u32;
typedef unsigned short u16;

#define MODE *(u32*)0x04000000

#define MODE3      0x0003
#define BG2        0x0400

#define MODE3_VRAM ((u16*)0x06000000)

#define MEMORY_IO *(u16*)(0x04000130)

#define KEY_LEFT 0x0020

int main() {
    MODE = BG2 | MODE3;

    while(1) {
        if (~(MEMORY_IO) & KEY_LEFT) {
            MODE3_VRAM[120 + 80*240] = 0x001F;
        }
    }

    return 0;
}
