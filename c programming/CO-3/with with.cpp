#include<stdio.h>
int add(int,int);
int main()
{
	int a,b,r;
	printf("Inside main function\n");
	printf("Enter a and b values\n");
	scanf("%d%d",&a,&b);
	r=add(a,b);
	printf("the sum is %d",r);
}
    int add(int c,int d)
{
    int s;
	s=c+d;
    return s;	
}



