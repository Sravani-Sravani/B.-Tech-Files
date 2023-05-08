#include<stdio.h>
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	(n%5==0)&&(n%7==0)?printf("%d is divisible by 5 and 7"):printf("%d is not divisible by 5 and 7",n);
}
