#include<stdio.h>
#include<string.h>
int main()
{
	int i,c=0;
	char a[100],b[100];
	scanf("%s",a);
	printf("Enter the other string");
	scanf("%s",b);
	if(strcmpi(a,b)==0)
	printf("Identical");
	else if(strcmpi(a,b)>0)
	printf("%s is lexigogrphically small",b);
	else
	printf("%s is lexigographically large",a);
	return 0;  
}
