#include<stdio.h>
int main()
{
	int n,rem,product=1;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		product=product*rem;
		n=n/10;
	}
	printf("%d is product of digits in a number",product);
	return 0;
}
