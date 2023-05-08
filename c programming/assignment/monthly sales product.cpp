#include<stdio.h>
int main()
{
	int n;
	printf("Enter the monthly sales of product");
	scanf("%d",&n);
	if(n<10000)
	printf("No commission");
	else if(n>10000&&n<=15000)
	printf("the commission is %d",(n*5)/100);
	else if(n>15000&&n<=20000)
	printf("the commission is %d",(n*7.5)/100);
	else
	printf("the commission is %d",(n*20)/100);
	return 0;
}
