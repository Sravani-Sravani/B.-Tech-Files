#include<stdio.h>
#include<math.h>
int main()
{
	int ab=100;
	double bc,bd,d;
	const double pi=3.14;
	bc=ab/tan(30*pi/180);
	bd=ab/tan(45*pi/180);
	d=bc+bd;
	printf("distance is %lf",d);
}
