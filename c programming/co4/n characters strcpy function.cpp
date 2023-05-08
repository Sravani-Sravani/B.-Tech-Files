#include<stdio.h>
#include<string.h>
int main()
{
	int n,i;
	char a[100],b[100];
	scanf("%s",a);
	scanf("%d",&n);
	strncpy(b,n,a);
	printf("%s",b);
	return 0; 
}
