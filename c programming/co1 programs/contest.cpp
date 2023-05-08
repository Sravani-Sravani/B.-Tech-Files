#include<stdio.h>
int main()
{
	int n,teams,leftover;
	printf("enter the no participants");
	scanf("%d",&n);
	teams=n/5;
	leftover=n%5;
	printf("the no teams %d\n",teams);
	printf("the no of leftover %d",leftover);
	
	return 0;
}
