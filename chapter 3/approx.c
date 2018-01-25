#include"stdio.h"
#include"math.h"
double approx(double n)
{
	return pow(n,n)*exp(-1*n)*sqrt((2n+1/3)*3.14);
}
main()
{
	double n;
	printf("Please entyer the number ");
	scanf("%lf",&n);
	printf("the approximation of ",n!" is",approx(n));
}
