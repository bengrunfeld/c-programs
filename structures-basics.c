/*
	Program description:
	Illustrates the basics of Structures
*/

#include <stdio.h>

main() {

	struct account {
		int branchNumber;
		int accountNumber;
	};

	struct account ben = {12345, 54321};

	printf("\nBranch #: %d Account #:%d\n", ben.branchNumber, ben.accountNumber);
}