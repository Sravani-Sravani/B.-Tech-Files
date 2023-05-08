#include<stdio.h>
#include<math.h>
int main()
{
	int n,nod=0;
	printf("enter any number");
	scanf("%d",&n);
	nod=log10(n)+1;
	printf("number of digits is %d",nod);	
}
