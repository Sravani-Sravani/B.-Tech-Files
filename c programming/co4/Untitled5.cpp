#include<stdio.h>
 #include<string.h>
 int main()
 {
 	char a[100],b[100],c[100];
 	int i,j;
 	printf("enter strings");
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
	 c[i]='\0';
	 printf("%d",c);
	 
	 return 0;
}
