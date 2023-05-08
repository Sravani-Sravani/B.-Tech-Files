#include<stdio.h>
int main()
{
	int num,nod=0;
	printf("enter any number");
	scanf("%d",&num);
	while(num!=0)
	{
		
		nod++;
		num=num/10;
	}
	printf("no of digits is %d",nod);
}
