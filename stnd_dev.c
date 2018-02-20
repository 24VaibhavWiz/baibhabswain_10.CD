#include"stdio.h"
#include"math.h"
main()
{
	double lr,sm,n,sum=0.0,std,sqr;
	int no,i;
	printf("Please enter the total number of numbers \n");
	scanf("%d",&no);
	printf("Please enter the 1 number\n");
	scanf("%lf",&n);
	sum=n;
	lr=n;
	sm=n;
	for(i=1;i<=no-1;i++)
	{
	        printf("Please enter the next number\n");
	        scanf("%lf",&n);
		sum+=n;
		if (n>lr)
       			lr=n;
		if(n<sm)
       			sm=n;
	}
	double av=sum/no;
	sqr=sum*sum;
	double avg=av*av;
	std=sqrt(sqr/no-avg);
	printf("The larger one is %f\n",lr);
        printf("The smaller one is %f\n",sm);
	printf("The average is %f\n",av);
	printf("The average square is %f\n",avg);
	printf("The square of the sum is %f\n",sqr);
	printf("The standard deviation is %f\n",std);
}