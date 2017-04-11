/* Excercise 1-20
 * Detab
 * Alessandro Lira
 *
 * Replaces 'tabs' in an input line with the appropriate ammount of spaces
 */

#include<stdio.h>

#define MAXLINE     1000    /* max array length for program */
#define TABSIZE     4       /* number of spaces in a tab */

int getLine(char line[]);
int insert_tab(char line[], int index);

main() {
    int i, c;
    int len;            /* length of current line */    
    char line[MAXLINE]; /* current input line */

    while ((len=getLine(line)) > 0) {
        for (i = 0; i < len; i++) {
            c = line[i];
            if (c == '\t')
                len=insert_tab(line, i);
        }
        printf(line);
    }

    return 0;
}

/* getLine:  read a line into s, return length  */
int getLine(char s[]) {
    int c, i;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') 
        s[i++] = c; /* note the use of i++ instead of ++i */
    s[i] = '\0';
    return i; 
}

/* replace a char at index with spaces to simulate a tab, returns new
 * array length
 * note: array size increases (TABSIZE-1) */
int insert_tab(char line[], int index) {
    int i, c, len;

    for (i = 0; (c = line[i]) != '\0'; i++)     /* get array length */ 
        len++;
    len = (len + TABSIZE-1);
    printf("array length was found to be: %d\n", len);

    for (i = len-1; i > (index + TABSIZE-1); i--) {
        line[i + TABSIZE-1] = line[i];    /* save values further ahead in 
                                           order to make space for tab */
    } 
    /* place blank chars where '\t' was to create new 'tab' */
    for (i = index; i < index + TABSIZE-1; i++)
        line[i] = ' ';

    line[len + TABSIZE-1]='\0'; /* replace endline char at end */
    return (len + TABSIZE-1);       /* return new array size */       
}
