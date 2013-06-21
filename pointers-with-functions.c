/*
	Program description:
	Illustrates the use of pointers with functions
*/

#include <stdio.h>

//Make sure prototype matches function, using the * operator
void increment(int *, int *);

main() {
	
	//Declare vars
	int a = 1, b = 2;

	//Test them
	printf("\na: %d\nb: %d\n", a, b);

	//Call the function, using the & operator
	increment(&a, &b);

	printf("\na: %d\nb: %d\n", a, b);

}

//Make sure that the function declaration matches the prototype
void increment(int *a, int *b) {
	++*a;
	++*b;
}

