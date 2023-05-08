#include<stdio.h>
int main()
{
	unsigned long int teleno;
	unsigned int a,ex,num;
	printf("Enter the teleno");
	scanf("%lu",&teleno);
	a=(teleno/10000000);
	ex=((teleno/10000)%1000);
	num=(teleno%10000);
	printf("%u\n%u\n%u\n",a,ex,num);
	printf("%lu\n%u",teleno,a+ex);
	return 0;
	
}
