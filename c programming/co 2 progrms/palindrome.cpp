#include<stdio.h>
int main()
{
	unsigned int r;
	unsigned long n,t,rev=0;
	printf("enter n value");
	scanf("%lu",&n);
	t=n;
	while(n>0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
		
	}
	if(rev==t)
	printf("%lu is palindrome",t);
	else
	printf("%lu is not palindrome",t);
	
	return 0;
}
