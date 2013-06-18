#include <stdio.h>
/*
	Example of simple i/o using getchar and putchar
*/


main() {
	int c;

	while ((c = getchar()) != EOF) {
		putchar(c);
	}

}