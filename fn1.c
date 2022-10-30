#include <stdio.h>
float average(int x)
{
	return (x/5);
}
main () {
	float a,b,c,d,e,sum;
	printf("Please enter number one : ");
	scanf("%f",&a);
	printf("Please enter number two : ");
	scanf("%f",&b);
	printf("Please enter number three : ");
	scanf("%f",&c);
	printf("Please enter number four : ");
	scanf("%f",&d);
	printf("Please enter number five : ");
	scanf("%f",&e);
	sum = a+b+c+d+e;
		
	average(sum);
	
	printf("your average : %f",average(sum));
}
