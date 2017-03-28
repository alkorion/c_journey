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
        if (c==' ' || c=='\n' || c=='\t') {
            if (state == IN) {
                state = OUT;
                if (wl >= '0' && wl  <= '8')
                    ++ndigitsw[wl-'1'];
                else if (wl > '8') 
                    ++ndigitsw['9'];
            }
        }
        else {
            if (state == IN)
                ++wl;
            else {
                state = IN;
                ++wl;
            }
        }
    }

}
