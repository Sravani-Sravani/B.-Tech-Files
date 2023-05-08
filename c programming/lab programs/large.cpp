#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	(a>b)&&(a>c)?printf("%d is large",a):
	(b>a)&&(b>c)?printf("%d is large",b):
		printf("%d is large",c);
		return 0; 
}
