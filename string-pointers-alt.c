/*
	Program Description:
	To illustrate the use of pointers with Strings
*/

#include <stdio.h>

main() {
	char *c = "Would you like to see my Gogomobile?";
	
	while (*c) {
		printf("%c", *c);
		c++;
	}
	
	if (*c == '\0') {
		printf("\n");
	}

}
