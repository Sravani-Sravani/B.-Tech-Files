#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char a[100],b[100],c[200];
	printf("Enter two strings");
	scanf("%s %s",a,b);
	for(i=0;a[i]!='\0';i++)
{
c[i]=a[i];
	}	
	for(j=0;b[j]!='\0';j++)
	{
	c[i]=b[j];
	i++;
    }
    printf("%s",c);
    
    return 0;
    
}
