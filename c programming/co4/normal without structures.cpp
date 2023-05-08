#include<stdio.h>
int main()
{
  unsigned long int id;
  unsigned int year;
  char name[100];
  unsigned int m,p,c,tot; 
  printf("Enter id");
  scanf("%lu",&id);
  printf("Enter year of admission");
  scanf("%u",&year);
  printf("Enter m,p and c marks");
  scanf("%u %u %u",&m,&p,&c);
  scanf("%s",&name);
  tot=m+p+c;
  printf("ID is %lu\n",id);
  printf("Name is %s\n",name);
  printf("Total is %u",tot);
  return 0;
}
