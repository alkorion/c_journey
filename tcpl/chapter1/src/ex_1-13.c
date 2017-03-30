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
    while ((c = getchar()) != EOF) {
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
    /*
    printf("digits = ");
    for (int i = 0; i < 10; ++i) {
        printf("%d", ndigitsw[i]);
    }
    printf("\n");
    */
    for (int i=0; i<9; ++i) {
        printf("%d\t", (i+1));
        for (int j=0; j < ndigitsw[i]; ++j)
            printf("+");
        printf("\n");
    }
    printf("10+\t");
    for (int j=0; j < ndigitsw[9]; ++j)
        printf("+");
    printf("\n");
}
