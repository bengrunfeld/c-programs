#include <stdio.h>
/*
	Example of using getchar and putchar
*/


main() {
	char c;

	printf("Please enter a character: ");
	c = getchar();
	printf("Your character is: ");
	putchar(c);
	printf("\n\n");

}