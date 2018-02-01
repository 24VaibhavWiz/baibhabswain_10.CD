#include"stdio.h"
#include"math.h"
double fun(double x,double n,double c)
{
        return (pow(x,n)-c);
}
double deriv(double x,double n)
{
        return (x*pow(x,n-1));
}

double next(double tm,double n,double c)
{
	double next_app=tm-fun(tm,n,c)/deriv(tm,n);
	return next_app;
}
main()
{
	double x_in,n,c,x_nxt,i,tm;
	printf("Please enter the value of c\n");
	scanf("%lf",&c);
	printf("Please enter the value of n\n");
	scanf("%lf",&n);
	x_in=c/2;
	x_nxt=x_in-fun(x_in,n,c)/deriv(x_in,n);
	for(i=0;i<100000;i++)
	{
		x_nxt=next(x_nxt,n,c);
	}
	printf("The root of the funcation is %f\n",x_nxt);

}

