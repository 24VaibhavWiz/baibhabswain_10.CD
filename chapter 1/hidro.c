#define g 9.8
#include"stdio.h"
main()
{
	double hght,mass,w;
	printf("Please enter the height and mass");
	scanf("%lf %lf",&hght,&mass);
	w=(((g*hght*mass)*0.9)*0.000001);
	printf("Mega watts is %f",w);
}
