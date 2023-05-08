#include<stdio.h>
int fact(int);
int main()
{
   int n,res;
   scanf("%d",&n);
   res=fact(n);
   printf("%d",res);
   
   return 0;	
}
int fact(int n)

	{
	
	if(n==1||n==0)
	return 1;

     else
     return(n*fact(n-1));
}
