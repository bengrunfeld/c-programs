#include <stdio.h>
/*
	Print out all ASCII Values
*/


main() {
	int c;

	c = 0;

	while (c < 256) {
		printf("%d\t\t%c\n", c, c);
		c++;
	}
}