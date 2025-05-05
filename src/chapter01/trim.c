#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);
int trim(char from[], char to[], int len);

void print(char s[]) 
{
    int i = 0;
    char c;
    while ((c = s[i++]) != '\0') {
        if (c == '\n') {
            printf("\\n");
        } else if (c == '\t') {
            printf("\\t");
        } else if (c == ' ') {
            printf("\\s");
        }
        else {
            printf("%c", c);
        }
    }
    printf("\n");
}

int main()
{
    int len;
    int n;
    char line[MAXLINE];
    char target[MAXLINE];
    
    while ((len = getline(line, MAXLINE)) > 0) {
        printf("Origin:");
        print(line);
        printf("Trimed:");
        if ((n = trim(line, target, len)) > 0) {            
            print(target);
        } else {
            printf("_\n");
        }        
    }
    
    return 0;
}

int getline(char s[], int lim) 
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

int trim(char from[], char to[], int len)
{
    int i;
    char c;
    for (i = len - 1; i >= 0; --i) {
        c = from[i];
        if (c == '\n') continue;
        if ((c != ' ' && c != '\t')) {
            break;
        }
    }
    int j;
    for (j = 0; j <= i; j++) {
        to[j] = from[j];
    }
    if (j > 0)
        to[j++] = '\0';
    return j;
}