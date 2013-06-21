/*
	Program Description:
	Illustrates the difference between ++i and i++
*/


#include <stdio.h>

main() {
	
	int i, j, x, y;

	i = j = 5;

	x = i++;
	y = ++j;

	printf("x: %d\ny: %d\n", x, y);

}