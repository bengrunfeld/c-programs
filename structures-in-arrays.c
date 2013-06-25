/*
	Program description:
	Illustrates the use of Structures in Arrays
*/

#include <stdio.h>

struct bank { 
	char *branchName;
	char *state;
	int branchNumber;
	int revenue;
};

struct bank bankList[5] = {
	"Boulder", "CO", 1025, 624803953,
	"Denver", "CO", 1086,  28471937,
	"Madison", "WI", 6914, 12802858,
	"New York", "NY", 9923,7559019,
	"Detroit", "MI", 3223, 1704190
};


struct bank retrieveBal(struct bank list[], int branchId);

main() {

 retrieveBal(bankList, 6914);

}

struct bank retrieveBal(struct bank list[], int branchId) {

	int i;
	for (i = 0; i < 5; i++) {
	if (list[i].branchNumber == branchId)
		printf("\nRECORD RETRIEVED FOR BRANCH: %d\nBranch Name: %s,\nState: %s,\nBranch Number: %d,\nRevenue: %d\n", branchId, list[i].branchName, list[i].state, list[i].branchNumber, list[i].revenue);
	}

	return;
}