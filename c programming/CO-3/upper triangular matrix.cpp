#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum;
	printf("enter 9 values");
	for(i=0;i<3;i++)
	{
		for(j=1;j<=3;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
	    if(i<j)
	    {
            printf("%d\n",a[i][j]);
	    	sum=sum+a[i][j];
	    		
		}
	}

	printf("the sum is upper triangular matrix is %d",sum);
	return 0;
	    
	
}
