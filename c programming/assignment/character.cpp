#include<stdio.h>
int main()
{
	char c;
	printf("Enter c value");
	scanf("%c",&c);
	if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	printf("%c is a vowel",c);
	else if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
	printf("%c is a consonant",c);
	else if(c==' ')
	printf("whitespace");
	else
	printf("special symbol");
	return 0;
}
