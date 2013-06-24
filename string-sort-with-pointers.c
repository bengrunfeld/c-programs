/*
	Program Desciption:
	Alphabetically sort a set of strings using pointers
	Problems I'm having with arrays of pointers:
		a. how to loop through the array and use each value
		b. comparing one value to another
*/

#include <stdio.h>

main() {

	int i, j;

	char *tmp, *point[] = { 
	"The moon is blue toinght.",		//0
	"How about a nice cup of tea?",		//1
	"What are you working on?",			//2
	"My ship is docked at port.",		//3
	"Be nice to your sister.",			//4
	""
	};


	for (j = 0; j < 5; j++) {
		for (i = 0; point[i] != "" ; i++) {
			if (*point[i+1] < *point[i] && *point[i+1] != '\0') {
				tmp = point[i];
				point[i] = point[i+1];
				point[i+1] = tmp;
				//printf("\n%d: SWAP!\n", i);
			}
		}
	}

	for (i = 0; point[i] != ""; i++) {
		printf("\n%d: %s\n",i, point[i]);
	}
}


