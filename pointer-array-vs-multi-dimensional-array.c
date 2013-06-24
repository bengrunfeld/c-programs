/*
	Program Description:
	Exploring the difference between pointer arrays and multi-dimensional arrays
*/

#include <stdio.h>

main() {

	//Declare variables
	char *a[] = {
		"hello there",
		"how are you today",
		"what is your name"
	};

	printf("\nanswer: %c\n", a[1][2]);

	// Doesn't work – throws a big fat error.
	/*
	char b[][] = {
		"Hello",
		"how are you?",
		"what is that?"
	};

	printf("\nanswer: %c\n", b[1][2]);	
	*/
}