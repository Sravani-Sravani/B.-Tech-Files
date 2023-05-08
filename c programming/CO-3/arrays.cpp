#include<stdio.h>
int main()
{
	int a[4][3],i,j;
	printf("enter 12 values");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}
	
	return 0;
	
}
