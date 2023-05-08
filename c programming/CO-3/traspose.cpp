#include<stdio.h>
int main()
{
	int m,n,a[10][10],i,j;
	scanf("%d %d ",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	printf("transpose is \n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		
	   printf("%d\t",a[i][j]);
	   printf("\n");

	}
	
	return 0;
	
}
}
