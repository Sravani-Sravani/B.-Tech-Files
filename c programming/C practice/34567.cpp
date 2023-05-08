#include<stdio.h>
int main()
{
	int x=1,y=5,i;
	for(i=1;i<5;i+=2)
	{
		x+=i;
		y*=(i++);
		
	}
	
	printf("%d\n%d",x,y);
	
}
