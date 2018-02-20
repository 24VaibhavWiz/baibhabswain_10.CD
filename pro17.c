#include "stdio.h"
#include "math.h"
void main()
{
	int n;
	
	printf("for sqrt(4 − x^2)\n");
	for(n = 2; n <= 128; n *= 2)
	{
		printf("For n = %d\n", n);
		trap(-2, 2, n, 0, func1);
	}
void trap(double a, double b, int n, double f, double func(double))
{
	double h, T = 0, temp = a;
	int i;
	
	f = 0;
	h = (b - a) / n;
	
	for(i = 1; i < n; i++)
	{
		temp += h;
		f += func(temp);
	}
	
	T = (h / 2) * (func(a) + func(b) + (2 * f));
	printf("\nT = %f\n", T);
}
double func1(double x)
{
	return sqrt(4 - (x * x));
}

// g(x) = x^2 * sin(x)
double func2(double x)
{
	return (x * x * sin(x));
}
	printf("\n\nfor x^2sin(x)");
	for(n = 2; n <= 128; n *= 2)
	{
		printf("\nFor n = %d", n);
		trap(0, 3.14159, n, 0, func2);	// for x^2sin(x)
	}
}
