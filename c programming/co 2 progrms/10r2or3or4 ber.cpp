#include<stdio.h>
int main()
{
	unsigned long int n;
	printf("enter the value of number");
	scanf("%lu",&n);
	if((n>=0)&&(n<=9))
	printf("one digit number");
	else if((n>=10)&&(n<=99))
	printf("two digit number");
	else if((n>=10)&&(n<=99))
	printf("two digit number");
	else if((n>=100)&&(n<=999))
	printf("three digit number");
	else if((n>=10)&&(n<=99))
	printf("four digit number");
	else
	printf("large number");
	
	
	}
