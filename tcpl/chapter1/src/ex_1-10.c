/* Tab & Backspace Replacer
 * Alessandro Lira
 *
 * Copies input to output, but replace instance of tabs with '\t', instances
 * of backspaces with '\b' and instances of backslashes with '\\'
 */

#include<stdio.h>

main() {
	int c;

	/* loop throug input searching for chars to replace */
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			putchar('\\');
			putchar('t');
		}
		/* this one doesn't work due to the terminal I/O setup */ 
		else if (c == '\b') {
			putchar('\\');
			putchar('b');
		}
		else if (c == '\\') {
			putchar('\\');
			putchar('\\');
		}
		else 
			putchar(c);
	}
}
