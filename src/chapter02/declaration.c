#include <stdio.h>

int main()
{    
    char val;
    printf("val uninit:%d", val);    
    const char msg[] = "warning:";
    // Cannot assign to variable 'msg' with const-qualified type 'const char[9]'
    // msg[0] = 'W';
    return 0;
}