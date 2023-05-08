#include<stdio.h>
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	(n%8==0)||(n%11==0)?printf("%d is either divisible by 8 or 11",n):printf("%d is not divisible by 8 or 11",n);
	
	return 0;
	
}
