#include<stdio.h>
int main()
{
	char a[100],x;
	int i,c=0;
	scanf("%s %c",a,&x);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==x)
		c++;
	}
	printf("%d",c);
	return 0;
}
