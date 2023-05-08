#include<stdio.h>
int main()
{
	struct point 
	{
		int x,y;
	};
	struct point p[5],*ptr;
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d %d",&p[i].x,&p[i].y);
	}
	ptr=p;
	for(i=0;i<5;i++)
	{
		printf("%d %d\n",ptr->x,ptr->y);
		ptr++;
	}
	
	return 0;
	
}
