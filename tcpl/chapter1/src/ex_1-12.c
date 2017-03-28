/* Word Separator
 * Alessandro Lira
 *
 * Program reads input and places each word on a separate line
 */

#include<stdio.h>

#define IN  1 /* currently in a word */
#define OUT 0 /* currently out of a word */

main() {
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c==' ' || c=='\t' || c=='\n') {
            if (state == IN) {
                putchar('\n');
                state = OUT;
            }
        }
        else {
            state = IN;
            putchar(c);
        }
    }
                
}
