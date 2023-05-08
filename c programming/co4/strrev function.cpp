#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char a[100];
	printf("Enter the string");
	scanf("%s",a);
	strrev(a);
	printf("%s",a);
	return 0;
}
