#include <stdio.h>
/*
	Word counter over multiple lines.
*/


main() {
	#define INWORD 1
	#define OUT 0

	int c, count, state;

	c = count = 0;

	state = OUT;

	printf ("This program counts words.\nType as much as you like on multiple lines.\nTo get your result and quit, type ? followed by Enter:\n");

	while ( (c = getchar()) != '?' ) {

		//going inside a word
		if (c != ' ' || c != '\n' || c != '\t') {
			if (state == OUT) {
				state = INWORD;
				count++;
			}
		}

		//out of word
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
		}
			
	}

	printf ("\nCount: %d\n", count);
}