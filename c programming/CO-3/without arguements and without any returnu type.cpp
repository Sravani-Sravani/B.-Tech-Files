#include<stdio.h>
int add();
int main()
{
	printf("Inside main function\n");
	add();
	printf("done");
}
    int add()
{
    int a,b,c;
	printf("Enter a and b values\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("The sum is %d\n",c);	
}



