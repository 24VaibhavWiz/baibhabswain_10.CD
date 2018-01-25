#include"stdio.h"
main()
{
	double deg,tot=0;
	printf("Please enter the degrees between (0-360) \n");
	scanf("%lf",&deg);
	if((deg>=0)&&(deg<=90))
	{
		tot=90-deg;
		printf("the bearing is East %f degrees North \n",tot);
	}
	else if((deg>90)&&(deg<=180))
	{
		tot=180-deg;
		printf("the bearing is South %f degrees East \n",tot);
	}
	else if((deg>180)&&(deg<=270))
	{
		tot=270-deg;
		printf("the bearing is West %f degrees South \n",tot);
	}
	else if((deg>270)&&(deg<=360))
	{
		tot=360-deg;
		printf("the bearing is North %f degrees West \n",tot);
	}
	
}
