#include<stdio.h>
int add(int,int);
int main()
{
	int a,b;
	printf("Inside main function\n");
	printf("Enter a and b values\n");
	scanf("%d%d",&a,&b);
	add(a,b);
	printf("done");
}
    int add(int c,int d)
{
    int s;
	s=c+d;
	printf("The sum is %d\n",s);	
}



