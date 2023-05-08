#include<stdio.h>
#include<math.h>
int main()
{
	double x,y,ans;
	printf("enter x and y values");
	scanf("%lf%lf",&x,&y);
	ans=pow(x,y);
	printf("%lf raised to power of %lf is %lf",x,y,ans);
	
	
	return 0;
}
	
