#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char a[100];
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		a[i]=a[i]+32;
	}
	printf("%s",a);
	return 0;
	
}
