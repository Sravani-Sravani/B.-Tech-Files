#include<stdio.h>
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	(n%3==0)?printf("%d is divisible by 3",n):printf("%d is not divisible by 3",n);
	
	return 0;
}
