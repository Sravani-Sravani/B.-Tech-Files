#include<stdio.h>
int main()
{
	static int i=7;
	if(--i)
	{
		main();
		printf("%d",i); 
	}
}
