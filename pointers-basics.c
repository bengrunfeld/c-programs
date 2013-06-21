/*
	Program description:
	Illustrates the basic use of pointers
*/

#include <stdio.h>

main() {
	
	//Declare vars
	int a = 1;

	//Declare x and y as pointers of type int
	int *x, *y;

	//Make x point to the same memory address as a
	x = &a;

	//Change the value of a via x as a pointer
	*x = 10;

	//Copy the pointer stored in x to y
	y = x;

	printf("\na: %d\n", a);

	//Make a change via y
	(*y)++;

	printf("\na: %d\n", a);
}