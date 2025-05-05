#include <stdio.h>
#include <string.h>

int htoi(char hex[])
{
    int len = strlen(hex);
    int startIdx = 0;
    if (len > 2 && (hex[1] == 'x' || hex[1] == 'X')) {
        startIdx = 2;
    }
    int num = 0;
    char c;
    for (int i = startIdx; i < len; i++) {
        c = hex[i];
        if (c >= '0' && c <= '9') {
            num = num * 16 + (c - '0');
        } else if (c >= 'A' && c <= 'F') {
            num = num * 16 + (c - 'A' + 10);
        } else if (c >= 'a' && c <= 'f') {
            num = num * 16 + (c - 'a' + 10);
        } else {
            return -1;
        }
    }
    return num;
}

int main()
{   
    char s[] = "0X1a3";
    printf("hex->dec: %s=>%d\n", s, htoi(s));
    return 0;
}