#include <stdio.h>

int power();

int main()
{
    printf("%d\n", power(2,3));
    return 0;
}

int power(int base, int n) 
{
    int i,p;
    p = 1;
    for (i = 1; i<=n;i++) {
        p = p* base;
    }
    return p;
}