#include<stdio.h>
int main()
{ 
	int a,b,t;
	printf("enter a and b value");
	scanf("%d%d",&a,&b);
	printf("before swap a=%d and b=%d",a,b);
	t=a;
	a=b;
	b=t;
	printf("after swap a=%d and b=%d",a,b);
	
	return 0;
}
