#include<stdio.h>
int main()
{
	char name[200];
	int i;
	scanf("%[^\n]s",name);
	for(i=0;name[i]!='\0';i++)
	{
		
	}
    i--;
    while(i>=0)
    {
    	printf("%c",name[i]);
    	i--;
	}
	return 0;
}
