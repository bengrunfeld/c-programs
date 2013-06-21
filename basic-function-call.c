/*
	Program description:
	Example of a basic function call, illustrating that functions can come in any order
	i.e. before or after main
*/

#include <stdio.h>

int someFunc(int y);

int main() {
	int x;

	x = someFunc(5);

	printf("\nx: %d\n", x);
}

int someFunc(int y) {
	return y;
}