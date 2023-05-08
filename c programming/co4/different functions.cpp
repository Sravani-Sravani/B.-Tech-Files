#include<stdio.h>
int main()
{
  struct student
  {
  	unsigned long int id;
  	unsigned int year;
  	char name[100];
  	unsigned int m,p,c,tot;
  };
  struct student s1;
  printf("Enter id");
  scanf("%lu",&s1.id);
  printf("Enter year of admission");
  scanf("%u",&s1.year);
  printf("Enter m,p and c marks");
  scanf("%u %u %u",&s1.m,&s1.p,&s1.c);
  scanf("%s",s1.name);
  s1.tot=s1.m+s1.p+s1.c;
  printf("ID is %lu\n",s1.id);
  printf("Name is %s\n",s1.name);
  printf("Total is %u",s1.tot);
  return 0;
}
