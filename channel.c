#include"stdio.h"
#define pi 3.14
#include"math.h"
main()
{
	double q,n=.014,r,a,s=.0015,depth,width=10;
	printf("At a depth of 5000 feet, the flow rate is 641.3225 cubic feet per second\n");
	printf("Please enter your initial guess with flow rate 1000.000 cubic feet per second\n");
	while(1)
		{	
			scanf("%lf",&depth);
			r=depth*width/(2*depth+width);
			a=(2.0*3.14*r*depth)+(2.0*3.14*r*r);
			q=((1.486/n)*a*(pow(r,(double)2/3))*(pow(s,(double)1/2)));
			if(q<1000)
			{
				double fin=1000-q;
				printf("Acording to your guess the flow rate is %f cubic feet per second\n",q);
				printf("Deffernce is %f\nwith percentage error %f\n",fin,fin/100);
				printf("Please enter the your next guess\n");				
			}
			else if(q>1000)
			{
				double fin=(1000-q)*(-1.0);
				printf("Acording to your guess the flow rate is %f cubic feet per second\n",q);
				printf("Deffernce is %f\nwith percentage error %f\n",fin,fin/100);
				printf("Please enter the your next guess\n"); 				
			}
			else
			{
				printf("Your guess is rigth %f\n",depth);
				break;
			}
			
		}
}