#include<stdio.h>
int main()
{
long long int m=5,n=10,o=0;
long long int *p1;
long long int *p2;
long long int *p3;
	p1=&m;
	p2=&n;
	p3=p1-p2;
	printf("p1-p2=%lld\n",p3);
}
