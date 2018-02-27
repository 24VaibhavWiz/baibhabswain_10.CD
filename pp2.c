#include"stdio.h"
#include"math.h"
double fig_ml_hr(double hr)
{
	return ceil((1/hr)*1000);
}
double by_units(double *cc)
{
	double hr;
	printf("Enter number of hours=>\n");
	scanf("%lf",&hr);
	*cc=fig_ml_hr(hr);
}
double by_weight(double rt,double con)
{
	return ceil(rt*(1/con));
}
double fig_drops_min(double rate,double factor)
{
	return ceil((rate*factor)/60);
}
double get_units_conc(double *mil)
{
	double rt2,con2;
	printf("Enter rate in units/hr=>\n");
	scanf("%lf",&rt2);
	printf("Enter concentration in units/ml=>\n");
	scanf("%lf",&con2);
	*mil=ceil(rt2/con2);
}
double get_kg_rate_conc(double *wt)
{
	double rt,weight,con;
	printf("Enter rate in mg/kg/hr=>\n");
	scanf("%lf",&rt);
	printf("Enter patient weight in kg=>\n");
	scanf("%lf",&weight);
	printf("Enter concentration in mg/ml=>\n");
	scanf("%lf",&con);
	*wt=by_weight(rt,con);
}
double get_rate_drop_factor(double *drop)
{
	double rate,factor;
	printf("Enter rate in ml/hr=>\n");
	scanf("%lf",&rate);
	printf("Enter tubing's drop factor(drops/ml)=>\n");
	scanf("%lf",&factor);
	*drop=fig_drops_min(rate,factor);
}
double get_problem()
{
	
		printf("Enter the number of the problem you wish to solve\n",' ');
		printf("GIVEN A MEDICAL ORDER IN %5c CALCULATE RATE IN\n",' ');
		printf("(1) ml/hr & tubing drop factor %5c drops / min\n",' ');
		printf("(2) 1 L for n hr %5c ml / hr\n",' ');
		printf("(3) mg/kg/hr & concentration in mg/ml %5c ml / hr\n",' ');
		printf("(4) units/hr & concentration in units/ml %5c ml / h\n",' ');
		printf("(5) QUIT\n");	
}
main()
{
	int ch;
	printf("INTRAVENOUS RATE ASSISTANT\n");	
	while((ch=get_problem())!=5)
	{
		double rate;
		if(ch==1)
		{
			get_rate_factor(&rate);
			printf("the drop per minute %f\n",rate);
		}
		else if(ch==2)
		{
			by_units(&rate);
			printf("the rate milliliters per hour %f\n",rate);
		}
		else if(ch==3)
		{
			get_kg_rate_conc(&rate);
			printf("The rate in milliliters per hour %f\n",rate);
		}
		else if(ch==4)
		{		
			get_units_conc(&rate);
			printf("The rate in milliliters per hour %f\n",rate);
		}
	}

}
