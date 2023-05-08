#include<stdio.h>
int main()
{
	int n,a[100],i,sum=0,*p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
    scanf("%d",&a[i]);
	p=a;
		for(i=0;i<n;i++)
	{
		sum=sum+(*p);
		p++;
	}
	printf("%d",sum);
	
	
	return 0;
}

