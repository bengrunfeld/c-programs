#include <stdio.h>
/*
	Read a line of text, then squeeze multiple spaces to only 1 space character
*/


main() {
	int c, count;
	count = 0;

	printf("\nType a sentance with multiple spaces, and the program\nwill convert all multiple spaces to a single space:\n(type ? and hit enter to quit):\n");

	while ((c = getchar()) != '?') {
		if (c == ' ') {
			putchar(c);
			while ((c = getchar()) == ' ') {
				;
			}
			putchar(c);
			
		} else {
			putchar(c);
		}

	}
}