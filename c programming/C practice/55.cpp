#include<stdio.h>
 int main() 
 {   
 int n,i,j;   
 printf("\n Enter number of lines of pattern to print");  
  scanf("%d",&n);   
  for(i=1;i<=n;i++)   
  {       
  for(j=1;j<=i;j++)          
  printf("%d\t",n-j+1);       
  printf("\n");

	   }
	  
	  
	  
	  
	   } 
