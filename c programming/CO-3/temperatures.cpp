#include<stdio.h>
int main()
{
	int temp[5],i,hc=0,pc=0,cc=0;
	printf("enter 30 temperatures");
	for(i=0;i<5;i++)
	{
	scanf("%d",&temp[i]);
	    if(temp[i]>=85)
		hc++;
		else if(temp[i]>=60&&temp[i]<=84)
		pc++;
		else
		cc++;
	}
	printf("no of hot days are %d\n",hc);
	printf("no of pleasant days are %d\n",pc);
	printf("no of cold days are %d",cc);
	
	
	return 0;
}

