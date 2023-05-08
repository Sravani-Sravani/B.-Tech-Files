#include<stdio.h>
int main()
{
	unsigned long int n;
	unsigned int d=0,r;
	printf("enter n value");
	scanf("%lu",&n);
	while(n>0)
	{
		r=n%10;
		d++;
		n=n/10;
	}
	printf("the no of digits  is %u",d);
}
