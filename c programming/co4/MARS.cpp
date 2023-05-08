#include<stdio.h>
#include<string.h>
int main()
{
  char a[1000];
  int l,count=0;
  scanf("%s",a);
  l=strlen(a);
  for(int i=0;i<l;i++)
  {
      if(a[i]!='S')
      
      count++;
      
       if(a[i+1]!='O')
      
      count++;
      

     if(a[i+2]!='S')
      
      count++;
      
       
      }
      printf("%d",count);
  
   return 0;

}
