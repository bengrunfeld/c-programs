#include <stdio.h>

main() {
	
	int i;

	char *a[] = {
		"hello",
		"how are you",
		"what is your name",
		""
	};
/*
	for (i = 0; i < 3; i++ ) {
		printf("\n%s", a[i]);
	}
*/

	
	for (i = 0; a[i][0] != '\0'; i++ ) {
		printf("\n%s", a[i]);
	}
	printf("\n");

}