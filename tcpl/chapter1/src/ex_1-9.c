/* Input -> Output Copier
 * Alessandro Lira
 *
 * Takes input, copies result to output. Replaces multiple instances of 
 * 'blanks' with a single blank
 */

#include<stdio.h>

#define AFTER_SPACE      1 /* currently after a space char */
#define NOT_AFTER_SPACE  0 /* NOT currently after a space char */
main () {
	int c, state;
	
	state = NOT_AFTER_SPACE;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (state != AFTER_SPACE) { 
				state = AFTER_SPACE;
				putchar(c);
			}		
		} 
		else {
			state = NOT_AFTER_SPACE;
			putchar(c);
		}
	}
}
