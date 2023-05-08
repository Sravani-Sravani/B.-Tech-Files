#include<stdio.h>
int main()
{
	int temp[30],i,max,min;
	printf("enter 30 temperatures");
	for(i=0;i<30;i++)
	{
	
	scanf("%d",&temp[i]);
}
	max=temp[0];
	for(i=0;i<30;i++)
	{
		if(max<temp[i])
		max=temp[i];
    }
     min=temp[0];
     for(i=0;i<30;i++)
     {
     	if(min>temp[i])
     	min=temp[i];
	 }
	 printf("the maximum value is %d\n",max);
	 printf("the minimum value is %d",min);
	 
	 
	 return 0;
		
		

}
