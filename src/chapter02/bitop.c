#include <stdio.h>

int main()
{    
    int x = 0xffff;
    printf("%d\n",~77);
    printf("%d\n",~077);
    printf("%d, %d\n",x, x & ~77);
    printf("%d, %d\n",x, x & ~077);
    return 0;
}