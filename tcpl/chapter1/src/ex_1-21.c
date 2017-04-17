/* Excercise 1-21
 * Entab
 * Alessandro Lira
 *
 * Replaces groups of blanks in an input line with an equivalent ammount
 * of tabs and/or spaces
 */

#include<stdio.h>

#define MAXLINE     1000    /* max array length for program */
#define TABSIZE     8       /* number of spaces in a tab */

int getLine(char line[]);
int insert_tab(char line[], int index);
int fill_spaces(char line[], int start, int stop);

main() {
    int i, c;
    int len;            /* length of current line */    
    int 
    char line[MAXLINE]; /* current input line */

    while ((len=getLine(line)) > 0) {
        for (i = 0; i < len; i++) {
            c = line[i];
            if (c == ' ') {
                int old_i = i;
                for (i, (c = line[i]) != ' '; i++);
                fill_spaces(old_i, i);
                i = i-1;
                break;
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

int fill_spaces(char line[], int start, int stop) {
    /* 
     * - using start/stop index, calc number of tabstop locations in gap
     * - record indices of tabstops in gap
     * - count # of chars array will grow by
     *   # tabstops + (index_stop - index_last_tabstop)
     * - insert tab and blank chars into new positions of array
     * - "scrunch" the array by moving after-gap values to start after gap 
     */

}













