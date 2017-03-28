/* File Copy 
   Alessandro Lira

   This program reads the input to the terminal (in this case keystrokes
   into the terminal prompt) and places them onto the line prompt, acting
   like a simple "input --> output" type renderer program

   It also attempts to print the read value of the EOF char, though this is
    sometimes buggy
*/

#include<stdio.h>

void main() {
	int c;
	while ((c = getchar()) != EOF) {
		putchar(c);
	}
	printf("\n");
	printf("%d was the EOF char\n", c);
}
