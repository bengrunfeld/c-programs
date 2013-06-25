/*
	Program Description:
	Illustratest the use of Structures with Pointers and Functions
*/

#include <stdio.h>

struct account {
	int branchNo;
	int accountNo;
	int balance;
};

struct account getPaid(struct account, int x);

main() {
	

	struct account ben = {111, 222, 5}, *b;

	//point b at ben
	b = &ben;

	printf("\nBen - Branch#: %d. Acct#: %d. Balance $: %d\n", (*b).branchNo, (*b).accountNo, (*b).balance);

	*b = getPaid(*b, 10);

	printf("\nBen - Branch#: %d. Acct#: %d. Balance $: %d\n", (*b).branchNo, (*b).accountNo, (*b).balance);
}

struct account getPaid(struct account neb, int x) {
	neb.balance += x;
	return neb;
}