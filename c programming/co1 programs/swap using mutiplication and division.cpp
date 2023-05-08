#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and values");
	scanf("%d%d",&a,&b);
	printf("before swap a=%d and b=%d",a,b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("after swap a=%d and b=%d",a,b);
	
	return 0;
}
