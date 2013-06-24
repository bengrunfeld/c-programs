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

	struct bank richBen = {1, 2, 3, 4};

	printf("\nDomestic - Branch #: %d Account #:%d\n", richBen.domestic.branchNumber, richBen.domestic.accountNumber);
	printf("\nInternational - Branch #: %d Account #:%d\n", richBen.international.branchNumber, richBen.international.accountNumber);
}