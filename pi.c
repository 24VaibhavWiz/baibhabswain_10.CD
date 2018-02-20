#include"stdio.h"
main()
{
	double i=1;double temp=1,j=1;
	double pi=0.0;
	while(temp<=100)
	{	
		pi=(pi+(1/j));
		i+=2;
		if(j>0)
			j=i*(-1);
		else
			j=i*1;
		temp+=2;
	}
	printf("The value of PI is %f\n",pi*4);	
}