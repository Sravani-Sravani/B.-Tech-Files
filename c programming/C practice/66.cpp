#include<stdio.h> 
int main() 
{   
int n,i,j,d=0;   
printf("\n Enter number of lines of pattern to print:");   
scanf("%d",&n);   
for(i=1;i<=n;i++)   
{       
for(j=1;j<=i;j++,d++)  
printf("%d\t",d);      
 printf("\n");    } } 
