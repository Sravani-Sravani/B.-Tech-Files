#include<stdio.h>
int main()
{
unsigned int days,months,leftover;
	printf("no of days");
	scanf("%u",&days);
	months=days/30;
	leftover=days%30;
	printf("the no of months is %u\n",days/30);
	printf("the no of days leftover is %u",leftover);
	
	return 0;
}
