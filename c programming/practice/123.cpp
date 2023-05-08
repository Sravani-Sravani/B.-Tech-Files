#include <stdio.h> 
int main() 
{
	int T,i;
    int A,B;
	scanf("%d", &T);
	int a[T];
	for(i=0;i<T;i++)
	{
	    scanf("%d %d",&A,&B);
		printf("%d\n",A+B);
		
	}
    return 0;
}
