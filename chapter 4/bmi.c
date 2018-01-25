#include"stdio.h"
main()
{
	double hgt,wt,bmi;
	printf("Please enter the person's height in inches"\n);
	scanf("%lf",&hgt);
	printf("Please enter the person's height in pounds"\n);
	scanf("%lf",&wt);
	bmi=(703*wt)/hgt*hgt;
	if(bmi<18.5)
	{
		printf("Underweight %f \n",bmi);
		break;
	}
	else if(bmi>18.5)&&(bmi<=24.9)
	{
		printf("Normal %f \n",bmi);
		break;
	}
	else if(bmi>24.9)&&(bmi<=29.9)
	{
		printf("Overweight %f \n",bmi);
		break;
	}
	else
	{
		printf("Obese %f \n",bmi);
	}
}
