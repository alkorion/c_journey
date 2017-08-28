/* Daily Programmer 2017-08-17:
 * Latin Squares
 * Alessandro Lira
 * 
 * Takes input for an n x n array and returns True or False if input
 * is a latin square
 */

#include<stdio.h>

#define MAXLINE         1000    /* max array length for program */
#define MAX_ARRAY_SIZE  32      /* max value N for input of array */

int getLine(char line[]);

    

main() {
    int i, c;

    while ((len=getLine(line)) > 0) {


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
    int i, c;
    int old_len, new_len;   /* store previous and new array length */
    int buffer;             /* number of spaces to next tab-stop */

    buffer = TABSIZE - (index%TABSIZE); /* calc # of blanks to insert */

    for (i = 0; (c = line[i]) != '\0'; i++)     /* get old array length */ 
        old_len++;

    new_len = (old_len + buffer) - 1; 
    
    /* store all values after tab at the new end of the array */
    for (i = new_len; i >= (index + buffer); i--) 
        line[i] = line[i-buffer+1];
        
    /* place blank chars where '\t' was to create new "tab" */
    for (i = index; i < index + buffer; i++)
        line[i] = ' ';

    return new_len;       /* return new array size */       
}

int fold_line(char line[], int line_length, int index) {
    if (line[index] == ' ' || line[index] == '\t') {
        line[index] = '\n';
        for 
    }
    else {
    }
}

/* inserts char in line[] at specified index
 * NOTE: assumes line-size can safely grow by 1 */
int insert_char(char line[], char c, char index) {
    /* get line length */
    int i;
    int old_len = 0;
    for (int i=0; (c=getchar(i)) != '\0'; i++)
        old_len++;

    /* shift over elements after insert */
    for (i = (old_len-1); i > index; i--) {
        line[i+1] = line[i];
    }
    /* insert char at index */
    line[index] = c;

    return 0;
}

