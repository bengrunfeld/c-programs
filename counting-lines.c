#include <stdio.h>
/*
	Counting Lines
*/


main() {
	int c, nl;

	nl = 0;
	while ((c = getchar()) != '?') 
		if (c == '\n')
			nl++;
	printf("%d\n", nl);
}