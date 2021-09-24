// stolen from https://www.coranac.com/tonc/text/first.htm

#define MODE *(unsigned int*)0x04000000

#define MODE3      0x0003
#define BG2        0x0400

int main() {
    MODE = BG2 | MODE3;

    ((unsigned short*)0x06000000)[120+80*240] = 0x001F; // ??? 1F

    while(1);

    return 0;
}
