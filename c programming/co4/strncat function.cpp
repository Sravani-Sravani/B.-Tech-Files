#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int n;
	printf("Enter string");
	scanf("%s",a);
    printf("Enter the other string");
	scanf("%s",b);
	printf("Enter no of elements to concatenates");
	scanf("%d",&n);
	strncat(b,a,n);
	printf("%s",b); 
	return 0;	
}
