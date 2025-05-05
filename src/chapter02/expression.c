#include <stdio.h>

int main()
{    
    printf("logic exp:%d\n", !1);
    printf("-1L>1UL:%d\n", -1L>1U); // 1 long=>unsigned long -1L=>ULONG_MAX
    printf("-1L>1UL:%d\n", -1L>1UL);// 1
    return 0;
}