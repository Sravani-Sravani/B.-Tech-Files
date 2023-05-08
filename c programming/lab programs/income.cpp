#include<stdio.h>
int main()
{
	unsigned long int i;
	float tax;
	printf("Enter the value of income");
	scanf("%lu",&i);
	if(i<=150000)
	tax=0;
	else if(i>=150000&&i<=300000)
	tax=(i*10)/100;
	else if(i>300000&&i<=500000)
	tax=(i*20)/100;
	else if(i>500000)
	tax=(i*30)/100;
	else 
	break;
	printf("the tax is %f",tax);
	
	return 0;
}
