#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],t[100];
	scanf("%s",a);
	strcpy(t,a);
	strrev(a);
	if(strcmp(a,t)==0)
	printf("Palindrome");
	else
	printf("Not a palidrome");
	
	return 0;
	
}
