/*
	Program Description:
	Illustratest the use of Structures with Functions
*/

#include <stdio.h>

struct account {
	int branchNo;
	int accountNo;
	int balance;
};

struct account getPaid(struct account, int x);

main() {
	

	struct account ben = {111, 222, 5};

	printf("\nBen - Branch#: %d. Acct#: %d. Balance $: %d\n", ben.branchNo, ben.accountNo, ben.balance);

	ben = getPaid(ben, 10);

	printf("\nBen - Branch#: %d. Acct#: %d. Balance $: %d\n", ben.branchNo, ben.accountNo, ben.balance);
}

struct account getPaid(struct account neb, int x) {
	neb.balance += x;
	return neb;
}