#include"stdio.h"
void calc_heat(double a,double k,double t1,double t2,double x,double *h)
{
	*h= (k*a*(t2-t1))/x;
}
void calc_area(double *a,double k,double t1,double t2,double x,double h)
{
	*a=h*x/(k*(t2-t1));
}
void calc_co(double a,double *k,double t1,double t2,double x,double h)
{
	*k=  h*x/(a*(t2-t1));
}
void calc_ti(double a,double k,double *t1,double t2,double x,double h)
{
	*t1= k*a*t2-h*x/k*a;
}
void calc_tf(double a,double k,double t1,double *t2,double x,double h)
{
	*t2= (k*a*t1)-h*x/k*a;
}
void calc_thick(double a,double h,double k,double t1,double t2,double *x)
{
	*x= k*a*(t2-t1)/h;
}
main()
{
	double h,t1,t2,x,k,a;
	int n1,n2,n3,n4,n5,n6;
	char ch;
	printf("Please enter the value of Heat transfer\n");
	n1=scanf("%lf",&h);
	if(n1==0)
	{
		scanf("%c",&ch);
	}
	printf("Please enter the value of Area\n");
	n2=scanf("%lf",&a);
	if(n2==0)
	{
		scanf("%c",&ch);
	}
	printf("Please enter the vlaue of co_efficient\n");
	n3=scanf("%lf",&k);
	if(n3==0)
	{
		scanf("%c",&ch);
	}
	printf("Please enter the value of T1\n");
	n4=scanf("%lf",&t1);
	if(n4==0)
	{
		scanf("%c",&ch);
	}
	printf("Please enter the value of T2\n");
	n5=scanf("%lf",&t2);
	if(n5==0)
	{
		scanf("%c",&ch);
	}
	printf("Please enter the thickness X\n");
	n6=scanf("%lf",&x);
	if(n6==0)
	{
		scanf("%c",&ch);
	}
	if(n1==0)
	{
		calc_heat(a,k,t1,t2,x,&h);
	}
	else if(n2==0)
	{
		calc_area(&a,t1,t2,x,k,h);
	}
	else if(n1==0)
	{
		calc_co(a,&k,t1,t2,x,h);
	}
	else if(n2==0)
	{
		calc_ti(a,k,&t1,t2,x,h);
	}
	else if(n5==0)
	{
		calc_tf(a,k,t1,&t2,x,h);
	}
	else if(n6==0)
	{
		calc_thick(a,h,k,t1,t2,&x);
	}
	printf("KA(T2-T1)\n");
	printf("H=--------------\n");
	printf("     x\n");
	printf("HEAT %f\n",h);
	printf("CO_EFFICIENT %f\n",k);
	printf("T1 %f\n",t1);
	printf("T2 %f\n",t2);
	printf("AREA %f\n",a);
	printf("THICKNESS %f\n",x);
}
