#include<stdio.h>
int main()
{
	int n,r,b=1,s=0;
	printf("enter the n value");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%2;
		s=s+r*b;
		b=b*10;
		n=n/2;
	}
	
	printf("binary=%d",s);
}
