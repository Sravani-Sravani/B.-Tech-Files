#include<stdio.h>
int main()
{
	int id;
	float bp,hra,sa;
	printf("Enter id,bp values");
	scanf("%d%f",&id,&bp);
	hra=(bp*20)/100;
	if(hra>7000)
	hra=7000;
	if(bp>10000)
	sa=(bp*10)/100;
	else
	sa=(bp*5)/100;
	printf("%d %f %f %f",id,bp,hra,sa);
	return 0;
}
