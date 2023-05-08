#include<stdio.h>
int main()
{
	int a;
	printf("enter the value of a");
	scanf("%d",&a);
	((a%5==0)||(a%3==0))?printf("a is divisible by either 3 or 5",a):printf("a is not divisible by either by 3 or 5",a);
	
	
	return 0;
	
	}
