#include<stdio.h>
int main()
{
	unsigned long int f=1;
	unsigned int n,i=1;
	printf("enter n value");
	scanf("%u",&n);
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	printf("the factorial is %lu",f);
	
	return 0;
}
