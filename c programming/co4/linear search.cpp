#include<stdio.h>
int main()
{
	int a[50],n,i,key,flag=0;
	printf("Enter the no of elements to take as input");
	scanf("%d",&n);
	printf("Enter the elements in to array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);}
		printf("Enter the element to search");
		scanf("%d",&key);
		for(i=0;i<n;i++)
		{
		if(key==a[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	printf("Element found\n");
	else
	printf("Element not found");
	return 0;
}
