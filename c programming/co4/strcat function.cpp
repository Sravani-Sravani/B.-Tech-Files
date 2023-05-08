#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	printf("Enter string");
	scanf("%s",a);
    printf("Enter the other string");
	scanf("%s",b);
	strcat(b,a);
	printf("%s",b);
	return 0;	
	}
