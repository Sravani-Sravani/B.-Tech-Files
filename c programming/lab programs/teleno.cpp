#include<stdio.h>
int main()
{
	unsigned long int teleno;
	unsigned int a,ex,num;
	printf("enter the teleno");
	scanf("%lu",&teleno);
	a=teleno/10000000;
	ex=(teleno/10000)%1000;
	num=teleno%10000;
	printf("area code is %u\n",a);
	printf("exchange code is %u\n",ex);
	printf("number is %u\n",num);
	printf("the complete telephone number is %u%u%u",a,ex,num);
	printf("addition of area code and exchange code is %u",a+ex);
	return 0;
}
