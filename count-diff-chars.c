#include <stdio.h>
/*
	Count different characters
*/


main() {
	int c, blanks, tabs, newLines;

	c = 0;
	blanks = 0;
	tabs = 0;
	newLines = 0;
	
	printf("Type stuff, then type ? to terminate program:\n");
	
	while ((c = getchar()) != '?') {
		if (c == ' ')
			blanks++;
		if (c == '\t')
			tabs++;
		if (c == '\n')
			newLines++;
	}

	printf("Blanks: %d. Tabs: %d. New Lines: %d.\n", blanks, tabs, newLines);
}