#include<stdio.h>
#include<string.h>
int main()
{
	int n,f=0,i;
	char a[100];
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n/2;i++)
	{
		if(a[i]!=a[n-i-1])
		{
			f=1;
			break;
		}
	}
	if(f==1)
	printf("Not a palindrome");
	else
	printf("Palindrome");
	
	return 0;
}
