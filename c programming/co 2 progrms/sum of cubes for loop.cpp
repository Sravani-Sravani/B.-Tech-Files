#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("enter the value of n");
	scanf("%d",&n);
		for(i=1;i<=n;i++)
	{
		sum=sum+(i*i*i);
		
	}
	printf("sum of cubes is %d",sum);
}
