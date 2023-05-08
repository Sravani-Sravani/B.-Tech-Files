#include<stdio.h>
int main()
{
	int a[100],i,j,temp,n,k;
	printf("enter no of elements in an array\n");
	scanf("%d",&n);
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
	
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
	}
	 printf("%d\n",a[i]);
}
	  return 0;
	
}
