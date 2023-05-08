#include<stdio.h>
int main()
{
	int x=7,y=24,z=8;
	printf("%d\n",(x<=y)&&(z>=x+y));
	printf("%d\n",(y!=z)||(x<=y));
	printf("%d",!(y!=z)&&(z>=x+y));
	
	return 0;	
}
