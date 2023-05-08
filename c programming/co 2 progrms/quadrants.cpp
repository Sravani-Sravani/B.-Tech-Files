#include<stdio.h>
int main()
{
	int x,y;
	printf("enter x,y");
	scanf("%d%d",&x,&y);
	if(x>0&&y>0)
	{
		printf("p in q1");
	}
	else if(x<0&&y>0)
		{
		printf("p in q2");
	}
			else if(x<0&&y<0)
		{
		printf("p in q3");
	}
	
		else
		{
		printf("p in q4");
	}
}
