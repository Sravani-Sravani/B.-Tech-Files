#include<stdio.h>
int main()
{
	char name[100];
	printf("%d\n",sizeof(name));
	scanf("%[^\n]s",name);
	printf("the name is %s",name);
	
	
}
