/*
	Program description:
	Illustrates the use of pointers with arrays
*/

#include <stdio.h>

main() {
	
	//Declare an array
	int a[10], i, *x;

	//Initialize the array
	for(i = 0; i < 9; i++) {
		a[i] = i;
	}

	//Make x point to a[0]
	x = &a[0];

	//Change a[0] to 15
	*x += 15;

	printf("\na[0]: %d\n", a[0]);

}