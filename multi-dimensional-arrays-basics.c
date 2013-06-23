/*
	Program Description:
	Declaration, initialization, and use of multi-dimensional arrays
*/

#include <stdio.h>

main() {
	
	//declare the array
	int days[2][5];

	//manually initialize the array
	days[1][5] = 22;

	//manually print out a value
	printf("Manual: \n%d\n", days[1][5]);

	int i, j;

	//automated approach
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 5; j++) {
			days[i][j] = (j * 10);
		} 
	}

	printf("\nAutomated Version:");

	//print out the array
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 5; j++) {
			printf("\narray index: %d, array value: %d", i, days[i][j]);
		} 
	}

	printf("\n");
}