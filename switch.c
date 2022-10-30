#include <stdio.h>
main () {
	char ch;
	scanf("%c",&ch);
	
	switch(ch)
	{
		case '\n':
			printf("You press ENTER");
			break;
		case '\t':
			printf("You press TAB");
			break;
		case ' ':
			printf("You press SPACEBAR");
			break;
		default:
			printf("You don't press ENTER,TAB and SPACEBAR");	
	}
}
