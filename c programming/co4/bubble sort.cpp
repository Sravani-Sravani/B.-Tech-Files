#include<stdio.h>
int main()
{
	int a[100],i,j,temp,n;
	printf("No of elements in an array\n");
	scanf("%d",&n);
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
    	for(j=0;j<n-1-i;j++)
    	
    	{
    		if(a[j]>a[j+1])
    		{
    			temp=a[j];
    			a[j]=a[j+1];
    			a[j+1]=temp;
			}
		}
	}
	printf("Elements after sorting");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	return 0;
	
	
}
