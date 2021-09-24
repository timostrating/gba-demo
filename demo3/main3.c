// stolen from https://www.coranac.com/tonc/text/keys.htm

#define MODE *(unsigned int*)0x04000000

#define MODE3      0x0003
#define BG2        0x0400

#define MODE3_VRAM ((unsigned short*)0x06000000)

int main() {
    MODE = BG2 | MODE3;

    while(1) {
        if (~(*(unsigned short*)(0x04000130)) & 0x0020) {
            MODE3_VRAM[120 + 80*240] = 0x001F;
        }
    }

    return 0;
}


