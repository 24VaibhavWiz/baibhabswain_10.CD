#include"stdio.h"
main()
{
	int passengers,no;
	double efficiency,liters,distance;
	printf("Please enter the total number of passengers\n");
	scanf("%d",&no);
	int i =no;
	while(i>=0)
	{
		printf("Please enter the passenger\n");
		scanf("%d",passengers);	
		printf("Please enter the distance\n");
		scanf("%lf",&distance);
		printf("Please enter the liters\n");
		scanf("%lf",&liters);
		efficiency=(liters*passengers)/distance;
		printf("efficiency is %f",efficiency);
		i-=passengers;
	}
}