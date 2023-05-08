#include<stdio.h>
int main()
{
	unsigned short int age;
	printf("enter the age");
	scanf("%u",&age);
	(age>18)?printf("eligible to vote"):printf("not eligible to vote");
	
	return 0;
}
