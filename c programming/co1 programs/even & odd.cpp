#include<stdio.h>
int main()
{
	unsigned int n;
	printf("enter the number");
	scanf("%u",&n);
	(n%2==0)?printf("%d is even",n):printf("%d is odd",n);
	
	return 0;
}
