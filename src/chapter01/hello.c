#include <stdio.h>
#include <limits.h>
#include <conio.h>

int main() {
    int c;
    while((c = getchar()) != EOF) {
        if (c == '\b') {
            printf("\\b");
        }
        else if (c == '\n') {
            printf("\\n");
        }
        else if (c == '\t') {
            printf("\\t");
        }
        else {
            printf("%c", c);
        }
    }    
    return 0;
}