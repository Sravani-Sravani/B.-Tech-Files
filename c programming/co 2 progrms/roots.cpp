#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	double d,r1,r2;
	printf("enter the coefficient a,b, and c");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>=0)
	{
		printf("real roots");
		r1=(-b+sqrt(d))/2*a;
		r2=(-b-sqrt(d))/2*a;
		printf("Roots are %lf and % lf",r1,r2);
		
	}
	else
	{
		printf("complex roots");
	}
}
