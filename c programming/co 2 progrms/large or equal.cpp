#include<stdio.h>
int main()
{
	 int a,b;
	 printf("enter a,b");
	scanf("%d%d",&a,&b);
	if(a==b)
	{printf("both are same",a);
	
	}
	else if(a>b)
	{
		printf("%d is large",a);
	}
	else
	{
		printf("%d is large",b);
	}
	return 0;
}
