/*
	Program Description:
	Accept a series of lines, then print the longest.
*/

#include <stdio.h>


main() {

	//Define Contants
	#define MAXLN 1000

	//Define Arrays & Vars
	char input[MAXLN];
	int singleChar = 0;
	int i = 0;
	int j = 0;

	//User friendly prompt
	printf ("Please enter a sentance, max of 1000 chars, then press enter:\n");

	//Read in a line of input and store it in an array
	while (singleChar != '\n' ) {
		singleChar = getchar();
		input[i] = singleChar;
		i++;
	}
	
	printf ("\nPrint out from array:\n");

	for (j = 0; j <= i; j++) {
		putchar(input[j]);
	}
}