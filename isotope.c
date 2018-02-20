#include"stdio.h"
#define e 2.71828
#include"math.h"
main()
{
	int y=1;
	double c,h=5.272,r,x,amnt; 
	c=pow(e,-0.693 );
	printf("Please enter the initial amount of the isotope\n");
	scanf("%lf",&amnt);
	while(y<=5)
	{
		r=amnt+pow(c,(double)y/h);
		printf("Year:     Amount:\n");
		printf("%d        %f\n",y,r);
		y+=1;
	}
}