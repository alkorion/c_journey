/* Excercise 1-16
 * Longest Line Program Revision v2.0
 * Alessandro Lira
 *
 * Reads input and prints the longest line
 */

#include <stdio.h>

#define MAXLINE 100   /* max input line length that will be stored */

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
main() {
    int len;            /* current line length */
    int max;            /* maximum length seen so far */
    char line[MAXLINE];    /* current input line */
    char longest[MAXLINE]; /* longest line saved here */

    max = 0;
    while ((len = getLine(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0)  /*therewasaline*/ 
        /* print lenght of longest line found */
        printf("Longeset string had %d chars\n", max);
        printf("Longest line was as follows (up to %d chars):\n%s\n",
                MAXLINE, longest); 
    return 0;
}

/* getLine:  read a line into s, return length  */
/* Fun Fact: NOT to be confused with the recently added 'getline() 
 * function which takes 3 args and will break the code you copied
 * and pasted from a 1988 book.
 */

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

/* copy:  copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i; 
}
