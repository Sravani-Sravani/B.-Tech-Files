#include<stdio.h>
int main()
{
	int res[10],i,sum;
	printf("enter 10 resistances");
	for(i=0;i<10;i++)
	scanf("%d",res[i]);
	for(i=0;i<10;i++)
	sum=sum+res[i];
	printf("total resistance is %d",sum);
	
	
	return 0;
} 
