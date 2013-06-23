/*
	Program Desciption:
	Alphabetically sort a set of strings using pointers
*/

#include <stdio.h>

main() {

	int i;
	char *point[5], *tmp;

	point[0] = "The moon is blue toinght.";
	point[1] = "How about a nice cup of tea?";
	point[2] = "What are you working on?";
	point[3] = "My ship is docked at port.";
	point[4] = "Be nice to your sister.";


	for (i = 0; i < 5; i++) {
		if (*point[i] > *point[i+1])
			;
		else if (*point[i] < *point[i+1]) {
			//having problems here... swap not working
			tmp = point[i];
			point[i] = point[i+1];
			point[i+1] = tmp;
			printf("\nSWAP!\n");
		}
	}

	for (i = 0; i < 5; i++) {
		printf("\n%d: %s\n",i, point[i]);
	}
}


