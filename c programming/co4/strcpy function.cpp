#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char a[100],b[100];
	printf("Enter the string");
	scanf("%s",a);
	strcpy(b,a);
	printf("%s",b);
	return 0; 
}
