#include<stdio.h>
#include<string.h>
int main()
{
	int i,c=0;
	char a[100];
	printf("Enter string");
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		c++;
	}
	printf("Words are %d",c+1);
	return 0;
}
