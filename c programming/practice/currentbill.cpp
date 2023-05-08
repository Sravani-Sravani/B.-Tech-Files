#include<stdio.h>
int main()
{
	int units;
	float bill;
	printf("enter the units");
	scanf("%d",&units);
	if((units>0)&&(units<=200))
	{
		bill=units*0.5;
	}
	else if((units>201)&&(units<=400))
	{
		bill=(200*0.5)+(units-200)*0.65;
	}
		else if((units>401)&&(units<=600))
		{
		bill=(200*0.5)+(200*0.65)+(units-400)*0.80;	
		}
		else if(units>=601)
		{
			bill=(200*0.5)+(200*0.65)+(200*0.80)+(units-600)*1.00;
		}
		printf("the current bill is %f",bill);
		
		
		return 0;
	
}
