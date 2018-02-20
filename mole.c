#include"stdio.h"
#define a 3.592
#define b 0.0427
#define r 0.08206
main()
{
	double temp,p,cng,moles;
	double vol_i,vol_f;
	printf("Please enter the initial volume\n");
	scanf("%lf",&vol_i);
	printf("Please enter the final volume\n");
	scanf("%lf",&vol_f);
	printf("Please enter the volume change value\n");
	scanf("%lf",&cng);
	printf("Please enter the number of moles\n");
	scanf("%lf",&moles);
	printf("Please enter the tempreture\n");
	scanf("%lf",&temp);
	int i=vol_i;
	while(i<=vol_f)
	{
		p=1000*((moles*r*temp/(vol_i-(b*moles)))-(a*moles/(vol_i*vol_i)));
		printf("%f : ",vol_i);
		printf("%f\n",p);
		vol_i+=cng;
		i+=cng;
	}
}