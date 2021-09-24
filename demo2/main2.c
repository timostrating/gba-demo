// stolen from https://www.coranac.com/tonc/text/first.htm

int main() {
    *(unsigned int*)0x04000000 = 0x0400 | 0x0003;

    ((unsigned short*)0x06000000)[120+80*240] = 0x001F;

    while(1); // why?

    return 0;
}
