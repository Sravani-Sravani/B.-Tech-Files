#include<stdio.h>
int main()
{
	struct train
	{
		int trainno,temp;
		char name[100];
		char source[100];
		char dest[100];
	};
	struct train t[10];
	int i,j;
	for(i=0;i<10;i++)
	{
		printf("Enter train no");
		scanf("%d",&t[i].trainno);
		printf("Enter name");
		scanf("[^\n]s",t[i].name);
		printf("Enter source");
		scanf("%s",t[i].source);
		printf("Enter destination");
		scanf("%s",t[i].dest);
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<10-i-1;j++)
		{
			if(t[j].trainno>t[j+1].trainno)
			{
				 temp=t[i];
				t[j]=t[j+1];
				t[j+1]=temp;
			}
		}
	}
	for(i=0;i<9;i++)
	{
		printf("%d\t%s\t%s\t%s",t[i].trainno,t[i].name,t[i].soure,t[i].dest);
	}
	return 0;
}
