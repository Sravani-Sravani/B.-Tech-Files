#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int i,n;
	scanf("%s %d",a,&n);
	printf("Enter no of characters to copy");
	for(i=0;a[i]!='\0'&&i<n;i++)
	b[i]=a[i];
	printf("%s",b);
	return 0;
}
