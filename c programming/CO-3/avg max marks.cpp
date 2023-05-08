#include<stdio.h>
int main()
{
	int n,marks[100],i,sum=0,max=0;
	float avg;
	printf("enter no of students");
	scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&marks[i]);
    for(i=0;i<n;i++)
    sum=sum+marks[i];
    avg=sum/(float)n;
    max=marks[0];
    for(i=0;i<n;i++)
    {
    	if(max<marks[i])
    	max=marks[i];
	}
	printf("the average marks of the class is %f\n",avg);
	printf("the maximum marks in the class is %d",max);
	
	
	return 0;
	
}
