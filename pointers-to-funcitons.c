/*
	Program Description:
	To illustrate the use of pointers to functions
*/

#include <stdio.h>

void chatter(char, char);

main() {
	
	void (*talk)(char, char);
	talk = &chatter;

	talk ('c', 'd');		//you can write it this way
	(*talk)('c', 'd');		//or this way. They are the same.

	return 0;
}

void chatter(char c, char d) {
	printf("\n%c %c\n", c, d); 
}
