/* Excercise 1-17
 * Print Long Lines
 * Alessandro Lira
 *
 * Reads input and prints any line longer than 80 chars
 */

#include <stdio.h>

#define MAXLINE 1000    /* max input line length that will be stored */

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

/* find and print lines > 80 chars */
main() {
    int len;            /* current line length */
    char line[MAXLINE]; /* current input line */

    while ((len = getLine(line, MAXLINE)) > 0)
        if (len > 80)
            printf(line);

    return 0;
}

/* getLine:  read a line into s (up to limit length), return complete
 *  length (unbounded) */
int getLine(char s[],int lim) {
    int c, i, len;
    
    for (i=0, len=0; (c=getchar())!=EOF && c!='\n'; ++len) {
        if (i < lim-1) 
            s[i++] = c;
    }
    if (c == '\n') {
         s[i++] = c;
    }
    s[i] = '\0';
    return len; 
}

