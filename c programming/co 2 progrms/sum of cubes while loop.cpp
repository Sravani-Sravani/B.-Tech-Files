#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("enter the value of n");
	scanf("%d",&n);
		while(i<=n)
	{
		sum=sum+(i*i*i);
			i++;
	}
	printf("sum cubes is %d",sum);
}
