#include <stdio.h>
#include <string.h>

enum months {
    JAN='J', FEB='F', MAR, APR, MAY, JUN, JUL, AUG
};

int main()
{    
    printf("0xff=%d\n", '\xff');
    printf("concat str:%s\n", "Hello" " World");
    char s[] = "Hello";
    unsigned long long len = strlen(s);
    printf("len=%llu\n", len);
    printf("MAR=%c\n", MAR);
    return 0;
}