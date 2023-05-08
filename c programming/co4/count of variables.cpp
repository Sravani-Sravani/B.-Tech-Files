#include<stdio.h>
int main()
{
  int uc=0,lc=0,dc=0,spc=0,i;
  char a[100];
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
     if(a[i]>='A'&&a[i]<='Z')
	 uc++;
	 else if(a[i]>='a'&&a[i]<='z')
	 lc++;
	 else if(a[i]>'0'&&a[i]<='9')
	 dc++;
	 else
	 spc++;  	
  }	
  printf("%d %d %d %d",uc,lc,dc,spc);
  return 0;
}
