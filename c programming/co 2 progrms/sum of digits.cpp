#include<stdio.h>
int main()
{
	unsigned long int n;
	unsigned int s=0,r;
	printf("enter n value");
	scanf("%lu",&n);
	while(n>0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	printf("the value of sum is %u",s);
}
