#include<stdio.h>
#include<string.h>
int main()
{
	int f[26]={0},index,i,c=0;
	char a[100];
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
		index=a[i]-'A';
		f[index]=1;
		}
	else if(a[i]>='a'&&a[i]<='z')
	{
		index=a[i]-'a';
		f[index]=1;
	}
}
	for(i=0;i<26;i++)
	c=c+f[i];
	if(c==26)
	printf("Pangram");
	else
	printf("Not a pangram");
	return 0;
}
