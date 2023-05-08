#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*a,sum=0;
	int i;
	printf("Enter the n value"); 
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	scanf("%d",a+i);
	for(i=0;i<n;i++)
	{
		if(*(a+i)%2!=0)
		sum=sum+*(a+i);
	}
	printf("Sum is %d",sum);
	return 0;
}
