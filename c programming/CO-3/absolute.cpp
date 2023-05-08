#include<stdio.h>
#include<math.h>
int main()
{
	int a[3][3],i,j;
	printf("enter 9 values");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	int sum1=0,sum2=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
	    if(i==j)
	    
	    	sum1=sum1+a[i][j];
	    
	    
	    	if(i+j==2)
	    	sum2=sum2+a[i][j];
	    }
		
	}
	
	printf("the absolute value is %d",abs(sum1-sum2));
	
	return 0;
	    
	
}
