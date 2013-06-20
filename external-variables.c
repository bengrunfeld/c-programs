#include <stdio.h>
/*
	Checks how external variables vs local variables work in C
*/

//define external variable
int a;

void funcCheck(void) {
	extern int a;
	int b;

	a = 5;
	b = 50;
}

main() {
	extern int a;
	int b;

	a = 0;
	b = 1;

	funcCheck();
	printf ("a: %d\nb: %d\n", a, b);
}


