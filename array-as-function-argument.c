/*
	Program description:
	Illustrate the use of arrays as function arguments
*/

#include <stdio.h>

int a[] = {1,2,3,4,5};

void func(int b[]);

main() {

	func(a);
}

void func(int b[]) {
	printf("\n%d\n", b[0]);	
}