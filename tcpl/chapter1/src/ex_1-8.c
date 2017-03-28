/* Blank, Tab, and Newline Counter
 * Alessandro Lira
 *
 * This program counts certain types of escape sequences
 */

#include<stdio.h>

main() {
	/* Declare counting vars as */
	int c, bc, tc, nlc;

	bc = tc = nlc = 0;
	while ((c = getchar()) != EOF) {
		/* Test if char matched the esc-seq that's being tracked */
		if (c == ' ')
			++bc;
		else if (c == '\t')
			++tc;
		else if (c == '\n')
			++nlc;
	}
	/* Print results of special char counting */ 
	printf("%d blank chars\n", bc);
	printf("%d tab chars\n", tc);
	printf("%d new-line chars\n", nlc);
}
