/* Excercise 1-19
 * Line Reverser
 * Alessandro Lira
 *
 * Function receives a char string and reverses it. Program reverses 
 * input one line at a time 
 */

#include<stdio.h>

#define MAXLINE     1000    /* max array length for program */

int getLine(char line[]);
void reverse(char str[]);

main() {
    int i, c;
    int end;            /* index of last non-blank char in line */
    int len;            /* length of current line */    
    char line[MAXLINE]; /* current input line */

    while ((len=getLine(line)) > 0) {
        reverse(line);
        /* printf('\n'); */
        printf(line);
    }
    return 0;
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

/* reverse: take an array, reverse it in-place
 * note: assumes all str arrays end with '\n' then  '\0' */
void reverse(char str[]) {
    int len, i;
    /* calc length of array */
    for (len=0; str[len]!='\0'; len++) {
    }
    if (i<=0)
        i = 1;  /* safe-guard for div/0' */

    for (i=0; i<len/2; i++) {
        str[len] = str[i];          /* store old front value */
        str[i] = str[(len-1)-i];    /* store end value in front */
        str[(len-1)-i] = str[len];  /* replace old front value at end */
    }
    str[len] = '\0';    /* properly terminate str again */
}








