#include<stdio.h>
int main()
{
	unsigned int n,special,big,weird,scary;
	printf("enter the value of n");
	scanf("%u",&n);
	special=big=weird=scary=0; 
	if(n%5==0)
	special=1;
	if(n>999)
	big=1;
	if((n%5==0)&&(n%6==0))
	weird=1;
	if((big==1)||(weird==1))
	scary=1;
	printf("special is %u \n",special);
	printf("big is %u \n",big);
	printf("weird is %u \n",weird);
	printf("scary is %u ",scary);
	

}
