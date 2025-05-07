#include <stdio.h>
#include <string.h>

void reverse(char s[])
{
    int i, j;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        char c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

/**
 * 处理最小负整数-2^31取相反数溢出的情况
 * 对于负数采用补码的形式表示，即：对该数取反，并用变量tail保存1
 */
void itoa(int n, char s[])
{
    int i, carry;
    int t, sign;   
    if (n < 0) {
        t = ~n;
        sign = 1; /* 表示负数*/
        carry = 1;
    } else {
        t = n;
        sign = 0;
        carry = 0;
    }
    i = 0;
    printf("-(%d)=%d + %d\n", n, t, carry);
    do { /* generate digits in reverse order */
        int sum = t % 10 + carry;
        s[i++] = sum % 10 + '0';
        carry = sum / 10;        
    } while ((t /= 10) > 0 || carry == 1);
    // 个位数要加上tail的值    
    if (sign)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}

int main()
{
    int x = -0x80;
    printf("x=%d\n", x);
    char s[32];
    itoa(x, s);
    printf("itoa:%d->%s\n", x, s);
    return 0;
}