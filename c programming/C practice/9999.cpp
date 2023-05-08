#include<stdio.h>
int main()

{
 int n,i,j;   
 printf("\n Enter number of lines of pattern to print:");   
 scanf("%d",&n);   
 for(i=1;i<=n;i++)   {       
 for(j=1;j<=n;j++)
 if(j<=i-1)              
 printf("  \t");        
 else           
  printf("%2d\t",j);       
   printf("\n");    } } 
