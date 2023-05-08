#include<stdio.h>
int add();
int main()
{
	int r;
	printf("Inside main function\n");
    r=add();
	printf("the sum is %d",r);
}
    int add()
{
    int a,b,c;
	printf("Enter a and b values\n");
	scanf("%d%d",&a,&b);
	c=a+b;
    return c;	
}



