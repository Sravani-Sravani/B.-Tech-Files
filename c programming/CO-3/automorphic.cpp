#include<stdio.h>
#include<math.h>
int isautomorphic(unsigned int);
int main()
{
unsigned int n,res;
printf("enter n value");
scanf("%u",&n);
res=isautomorphic(n);
if(res==1)
printf("%u is an automorphic",n);
else
printf("%u is not an automorphic",n);
return 0;
}
int isautomorphic(unsigned int n)
{
	int d=0,r,sq=n*n,t=n;
	while(n>0)
	{
		r=n%10;
		d++;
		n=n/10;
	}
	{
		if (t==sq%(int)pow(10,d))
		return 1;
		else 
		return 0;
	}
	return 0;
	
}
