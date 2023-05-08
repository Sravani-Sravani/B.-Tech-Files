#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a,b");
	scanf("%d%d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("the values of b,a is %d%d",b,a);
	
	
	return 0;
}
