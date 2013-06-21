/*
	Program description:
	Usage of the ternary if operator
*/

#include <stdio.h>

main() {
	
	int w, x, y, z;

	w = 5;
	x = 10;

	y = (x > w) ? x : w;
	printf("\ny: %d\n", y);

	(x > w) ? (z = x) : (z = w);
	printf("z: %d\n", y);
}
