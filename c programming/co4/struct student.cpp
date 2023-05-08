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
  printf("%d",sizeof(struct student));
  return 0;
}
