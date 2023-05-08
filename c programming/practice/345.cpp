#include <stdio.h> 
int main() 
{
	int T,i;
	scanf("%d", &T);
	int A[1000],B[1000];
	for(i=0;i<T;i++)
	{
	    scanf("%d",&A[i]);
	    scanf("%d",&B[i]);
	}
	for(i=0;i<T;i++)
	{
	  printf("%d\n",A[i]+B[i]); 
	}
    return 0;
}
