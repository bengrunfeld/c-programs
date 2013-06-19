/*
	Program Description:
	Accept a series of lines, then print the longest.
*/

#include <stdio.h>

//Define functions before using them
int test(int newLength, int oldLength) {
	if (newLength > oldLength) {
		//The new line is longer than the current biggest line
		return newLength;
	} else {
		//The new line is shorter the the current biggest line
		return 0;
	}
}

main() {

	//Define Contants
	#define MAXLN 1000

	//Define Arrays & Vars
	char input[MAXLN];
	char longest[MAXLN];
	int singleChar = 0;
	int biggest = 0;
	int result = 0;
	int i = 2;
	int j = 0;

	//User friendly prompt
	printf ("Please enter a sentance, max of 1000 chars, then press enter:\nType * then Enter to exit:\nInput > ");

	//Read in a line of input and store it in an array
	while ( input[i-2] != '*' ) {
		i = 0;
		while ( singleChar != '\n' ) {
			singleChar = getchar();
			input[i] = singleChar;
			i++;
		}
		
		//Check if user wants to quit
		if ((input[i-2]) != '*') {

			//Test if new array is larger than longest array
			result = test(i, biggest);

			if (result != 0) {
				printf("\nNew line is longer that current biggest line. Length:%d.\nInput > ", result-1);
				biggest = result;

				//Copy new array into longest array
				for (j = 0; j < i; j++) {
					longest[j] = input[j];
				}
				singleChar = 0;
			} else {
				printf("\nNew line is shorter than current biggest line.\nInput > ");
				singleChar = 0;
			}		
		}
	}

	//Print out the longest line
	printf ("\nThe longest line you submitted was:\n");
	for (j = 0; j <= biggest; j++) {
		putchar(longest[j]);
	}
}

