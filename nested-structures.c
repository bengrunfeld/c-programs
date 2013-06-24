/*
	Program description:
	Illustrates the Nested Structures
*/

#include <stdio.h>

main() {
	struct account {
		int branchNumber;
		int accountNumber;
	};

	struct bank {
		struct account domestic;
		struct account international;
	};

	struct bank richBen = {100, 200, 300, 400};

	struct bank poorBen = {1, 2, 3, 4};

	printf("\nRich Ben – Domestic - Branch #: %d Account #:%d", richBen.domestic.branchNumber, richBen.domestic.accountNumber);
	printf("\nRich Ben – International - Branch #: %d Account #:%d", richBen.international.branchNumber, richBen.international.accountNumber);

	printf("\n\nPoor Ben – Domestic - Branch #: %d Account #:%d", poorBen.domestic.branchNumber, poorBen.domestic.accountNumber);
	printf("\nPoor Ben – International - Branch #: %d Account #:%d\n", poorBen.international.branchNumber, poorBen.international.accountNumber);
}