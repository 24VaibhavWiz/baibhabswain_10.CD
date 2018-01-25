#include"stdio.h"
#define tax 5.25
#include"math.h"
main()
{
	double min,n_min,w_min,avg_cost,total,mn;		
	printf("Please enter the weekdays minutes\n");
	scanf("%lf",&min);
	printf("Please enter the night minutes\n");
	scanf("%lf",&n_min);
	printf("Please enter the weekend minutes\n");
	scanf("%lf",&w_min);
	if(min>600)
	{
		printf("wthout tax\n");		
		mn=600-min;
		total=(mn*.10+39.99)*4;
		printf("%f",total)
		printf("with tax\n");
		printf("%f",(total*tax));
	}
	else if (min<600)
	{
		printf("without tax\n");
		total=4*(39.99);
		printf("with tax\n");
		printf("%f",(total*tax))
	}
	avg_cost=total/min;
	printf("%f\n",avg_cost);
	printf("%f\n",ceil(avg_cost));
	printf("%f\n",ceil(tax));
	
}
