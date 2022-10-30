#include <stdio.h>

void ascii_char(int num)
{
	printf("your character is %c\n",num);
}
 main () {
 	int number;
 	printf("Please enter number between 1-255 : ");
 	scanf("%d",&number);
 	ascii_char(number);// call ascii_char function by sent argument number to fn.
 	
 }
