#include<stdio.h>
int main()
{
	unsigned long int id;
	char gender;
	char name[100];
	scanf("%lu %c %[^\n]s",&id,&gender,name);
	printf("id is %lu\n",id);
	printf("gender is %c\n",gender);
	printf("name is %s",name);
	return 0;
}
