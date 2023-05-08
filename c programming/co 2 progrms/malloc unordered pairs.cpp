#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*a,i,j;
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
	scanf("%d",(a+i));
	}
	for(i=0;i<=n-2;i++)
	{
	for(j=i+1;j<n;j++)
	printf("%d\t%d\n",a[i],a[j]);	
	}
	return 0;
}
