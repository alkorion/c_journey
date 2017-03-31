/* Excercise 1-13
 * Word Length Histograms
 * Alessandro Lira
 *
 * Prints an x-axis histogram based in the word legth of input file
 */

#include<stdio.h>

#define IN  1
#define OUT 0

main() {
    /* declare counters */
    int c, wl, state;
    int ndigitsw[10];

    /* initialize counter vars */
    wl = 0;
    for (int i = 0; i < 10; ++i) {
        ndigitsw[i] = 0;
    }
    
    state = OUT;
    while ((c=gethchar()) != EOF) {
        /* check if end of word char */
        if (c==' ' || c=='\n' || c=='\t') {
            if (state == IN) {
                /* if word ended, state=out and store word length */
                state = OUT;
                if (wl > 1 && wl < 10) {
                    ++ndigitsw[wl-1];
                    wl = 0; /* reset word length */
                }
                /* words longer than 10 char are stored in final bin */
                else if (wl >= 10) {
                    ++ndigitsw[9];
                    wl = 0; /* reset word length */
                }
            }
        }
        /* increment wl counter while iterating through word */
        else {
            if (state == IN)
                ++wl;
            /* else start a new word-length count */
            else {
                state = IN;
                ++wl;
            }
        }
    }
    /* loop through word-length array and print '+'s for every value */
    for (int i=0; i<9; ++i) {
        /* print labels 1-9 of historgram */
        printf("%d\t", (i+1));
        for (int j=0; j < ndigitsw[i]; ++j)
            printf("+");
        printf("\n");
    }
    /* edge case print statement for final value, this final array 
     * value counts instances of words with >= 10 chars */
    printf("10+\t");
    for (int j=0; j < ndigitsw[9]; ++j)
        printf("+");
    printf("\n");
}
