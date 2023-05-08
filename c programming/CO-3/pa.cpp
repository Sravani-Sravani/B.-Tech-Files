#include<stdio.h>
int main()
{
	int n,a[100],i,c=0,sum=0,*p;
	float avg;
	scanf("%d",&n);
	for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    p=a;
    for(i=0;i<n;i++)
    {
    	sum=sum+(*(p+i));
	}
	avg=(float)sum/n;
	for(i=0;i<n;i++)
	{
		if(*(p+i)<(avg))
		c++;
	}
	printf("%f\n%d",avg,c);
	
	return 0;
}
 

