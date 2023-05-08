#include<stdio.h>
int main()
{
	struct student;
	{
		unsigned long int id;
		unsigned int m,pscp,dlp,tot;
	};
	struct student s[5]; 
	for(int i=0;i<5;i++)
	{
		printf("Enter id of %d student",i);
		scanf("%lu",&s[i].id);
		printf("Enter the marks of %d student");
		scanf("%u %u %u",&s[i].m,&s[i].pscp,&s[i].dlp);
		s[i].tot=s[i].m+s[i].pscp+s[i].dlp;
	}
	printf("ID\tMATHS\tPSCP\tDLP\tTOT\n");
	for(int i=0;i<5;i++)
	{
		printf("%lu\t%u\t%u\t%u\t%u\n",s[i].id,s[i].pscp,s[i].dlp,s[i].tot);
	}
	return 0;
}
