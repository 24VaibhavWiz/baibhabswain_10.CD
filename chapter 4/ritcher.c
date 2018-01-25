#include"stdio.h"
main()
{
	double rit;
	printf("Please enter the ritcher points \n");
	scanf("%lf",&rit);
	if(rit < 5.0)
{	
	printf("Little or no damage \n")
}
        else if((rit>5.0) && (rit <=5.5))
{
 	printf("Some damage\n");
}
        else if((rit>5.5) && (rit<=6.5))
{
	printf("Serious damage: walls may crack or fall\n");
}
        else if((rit>6.5) && (rit<=7.5))
{
	printf(" Disaster: houses and buildings may collapse\n");
}
	else if(rit>7.5)
{
        printf("higher Catastrophe: most buildings destroyed\n");
}
}
