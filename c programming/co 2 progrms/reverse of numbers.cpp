#include<stdio.h>
int main()
{
	unsigned long int n;
	unsigned int rev=0,r;
	printf("enter n value");
	scanf("%lu",&n);
	while(n>0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	}
	printf("the reverse of numbers is %u",rev);
}
