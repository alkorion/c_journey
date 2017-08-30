/* Daily Programmer 2017-08-17:
 * Latin Squares
 * Alessandro Lira
 * 
 * Takes input for an n x n array and returns True or False if input
 * is a latin square
 */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

#define MAXLINE         1000    /* max array length for program */
#define MAX_ARRAY_SIZE  32      /* max value N for input of array */

int getLine(char line[]);

    

main() {
    int i, c;
    FILE *pointer_file;
    char buffer[MAXLINE];

    pointer_file = fopen("../inc/input.txt","r");
    
    char line_number=0;
    int square_size;

    while (fgets(buffer, MAXLINE, pointer_file) != NULL) {
        if (line_number % 2 == 0) { /* if its the square size input */
            square_size = atoi(buffer);
            printf("%d\n",square_size);
        }
        line_number++;
    }    

    fclose(pointer_file);

    return 0;
}
