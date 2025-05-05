#include <stdio.h>
/**
 * 该函数返回：将x从p位开始的n个(二进制)位设置为y中最右边n位的值，x的其余各位保持不变
 */
unsigned int setbits(unsigned x, int p, int n, int y)
{
    unsigned low_n_bits = y & (~((~0) << n));
    return x | (low_n_bits << (p - n + 1));
}

int main()
{    
    unsigned x = 0x77;
    int y = 0xffff;
    int n = 3;
    int ret = setbits(x, 4, n, y);
    printf("x=%d\n", x);
    printf("setbits=%d\n", ret);

    printf("-1>>1=%d\n", -1<<1); // Value = -2 (0xfffffffe)

    printf("sizeof(int)=%llu bits\n", sizeof(int) * 8);
    
    return 0;
}