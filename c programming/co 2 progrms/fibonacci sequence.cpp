#include<stdio.h>
int main()
{
	int t,f1=0,f2=1,f3,i=3;
	printf("Enter the value of t");
	scanf("%d",&t);
	printf("%d\n%d\n",f1,f2);
	while(i<=t)
	{
		f3=f1+f2;
		printf("%d\n",f3);
		f1=f2;
		f2=f3;
		i++;
	}
	return 0;
}
