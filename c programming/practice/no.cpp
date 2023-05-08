#include<stdio.h>
int main()
{
	unsigned long int f=1;
	unsigned int n,i=1;
	printf("enter n value");
	scanf("%u",&n);
	for(i=1;i<=n;i++)
	
		f=f*i;
	
	
	printf("the factorial is %lu",f);
	
	
	}
