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

struct account getPaid(int x);

main() {
	

	struct account ben = {111, 222, 5};

	printf("\nBen - Branch#: %d. Acct#: %d. Balance $: %d\n", ben.branchNo, ben.accountNo, ben.balance);

	ben = getPaid(10);

	printf("\nBen - Branch#: %d. Acct#: %d. Balance $: %d\n", ben.branchNo, ben.accountNo, ben.balance);
}

struct account getPaid(int x) {
	struct account ben;
	ben.branchNo = 222;
	ben.accountNo = 333;
	ben.balance += x;
	return ben;
}