#include"stdio.h"
#include"math.h"
#define tax 3.625
main()
{
	double hwr,payment,tax_reduction;
	int id,w;
	printf("Please enter your identification number : \n");
	scanf("%d",&id);
	printf("Please enter the hourly wage rate : \n");
	scanf("%lf",&hwr);
	printf("Please enter the number of hour's worked weekly : \n");
	scanf("%d",&w);

	if(w>40)
	{
		payment = 1.5*( hwr * w );
		tax_reduction = payment - (payment * (tax/100));
	}
	else
	{
		 payment = hwr * w;
		 tax_reduction = payment - (payment * (tax/100));
	}
	printf("IDENTIFICATION NUMBER : %d\n",id);
	printf("YOUR HOURLY WAGE RATE : %f\n",hwr);
	printf("NUMBER OF HOUR'S YOU HAVE WORKED : %d\n",w);
	printf("YOUR TOTAL PAYROLL  : Rs.%f\n",payment);
	printf("AVERAGE AMOUNT OF YOUR PAY : Rs.%f\n",tax_reduction);	
}
