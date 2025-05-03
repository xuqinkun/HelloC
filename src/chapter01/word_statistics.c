#include <stdio.h>
#define IN 0
#define OUT 1
#define MAX_LEN 20

int main()
{
    int c;
    int state = IN;
    int word_len[MAX_LEN+1] = {0};
    int len = 0;
    int max_count = 0;
    while ((c = getchar()) != EOF) {        
        if (c == ' ' || c == '\n' || c == '\t' || c == '.' || c == ',') {            
            if (state == IN) {
                state = OUT;
                word_len[len]++;
                if (word_len[len] > max_count) {
                    max_count = word_len[len];
                }
                len = 0;
            }
        } else {
            len++;
            state = IN;
        }
    }
    
    // for(int i = 1; i < MAX_LEN + 1; i++) {
    //     printf("%d -> %d \t", i, word_len[i]);
    // }
    for (int level = max_count; level > 0; level--) {
        printf("%3d|", level);
        for (int len = 1; len <= MAX_LEN; len++) {
            if (word_len[len] >= level) {
                printf("  *");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("   +");
    for (int len = 1; len <= MAX_LEN; len++) {
        printf("---");
    }
    printf("\n    ");
    for (int len = 1; len <= MAX_LEN; len++) {
        printf("%3d", len);
    }
    return 0;
}