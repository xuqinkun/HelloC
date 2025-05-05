#include <stdio.h>

int main()
{    
    printf("long %ld~%ld\n", -(long)((unsigned long)(~0)>>1)- 1, (long)((unsigned long)(~0)>>1));
    printf("int %d~%d\n", -(int)((unsigned int)(~0)>>1)- 1, (int)((unsigned int)(~0)>>1));
    printf("short %d~%d\n", -(short)((unsigned short)(~0)>>1)- 1, (short)((unsigned short)(~0)>>1));      
    return 0;
}
