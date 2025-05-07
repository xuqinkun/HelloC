#include <stdio.h>

void itob(int num, char s[], int base)
{
    int mask = base - 1;
    int i = 0;
    while (num) {
        int mod = num & mask;
        if (mod >= 10) {
            s[i++] = 'A' + (mod - 10);
        } else {
            s[i++] = mod + '0';
        }
        num >>= 4;
    }
    if (num >= 10) {
        s[i++] = 'A' + (num - 10);
    } else {
        s[i++] = num + '0';
    }
    s[i] = '\0';
}

int main()
{
    int n = -1;
    char s[32];
    int base = 16;
    itob(n, s, base);
    printf("%d=%s(%d)\n", n, s, base);
    // printf("%d\n", -17%16);
}