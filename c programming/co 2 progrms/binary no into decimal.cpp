#include<stdio.h>
int main()
{
	int n,r,b=1,s=0;
	printf("enter n value");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		s=s+(r*b);
		b=b*2;
		n=n/10;
	}
	
	printf("decimal=%d",s);
	
	return 0;
}
