#include"stdio.h"
double scale(double x,int n)
{
	double scale_factor;
	scale_factor = pow(10, fr);
	return (x * scale_factor);
}
int add(double x)
{
	return (x+0.5);
}
main()
{
	int fr;double x;
	printf("Please enter the fractional number");
	scanf("%d",&fr);
	printf("The rounded number is %d",add(scale(fr))*0.01);
}
