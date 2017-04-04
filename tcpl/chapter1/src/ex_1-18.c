/* Excercise 1-18
 * Trailing Blank Remover
 * Alessandro Lira
 *
 * Removes trailing blanks and tabs from each line of input, also
 * deletes completely blank lines
 */

#include<stdio.h>

#define MAXLINE     1000    /* max array length for program */

int getLine(char line[]);

main() {
    int i, c;
    int end;            /* index of last non-blank char in line */
    int len;            /* length of current line */    
    char line[MAXLINE]; /* current input line */

    while ((len=getLine(line)) > 0) {
        end = 0;
        /* iterate backwards through line */
        for (i=len-1; i>=0; --i) {
            c = line[i];
            if (c!=' ' && c!='\t' && c!='\n') { 
                end = i; /* save position of last non-blank char */
                break;
            }
        }
        if (i > 1) { /* check if current line was blank, if so skip
                         the outputting of current line */
            for (i=0; i <= end; ++i) {
                putchar(line[i]);
            }
            putchar('\n'); /* add proper-endline to truncated line */
        }
    }
}

/* getLine:  read a line into s, return length  */
int getLine(char s[]) {
    int c, i;
    for (i=0; (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') 
        s[i++] = c;
    s[i] = '\0';
    return i; 
}
