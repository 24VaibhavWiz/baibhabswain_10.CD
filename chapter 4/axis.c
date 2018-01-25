#include"stdio.h"
main()
{
	double x,y;
	printf("please enter the x-cordinate\n");
	scanf("%lf",&x);
	printf("please enter the y-cordinate\n");
	scanf("%lf",&y);
	if(x==0.0)
	{
		printf("X-axis %f%f \n"x,y);
	}
	else if(y==0.0)
	{
		printf("Y-axis %f%f \n"x,y);
	}
	else if((x>0)&&(y>0))
	{
		printf("1 quad");
	}
	else if((x<0)&&(y<0))
	{
		printf("4 quad");
	}
	else if((x<0)&&(y>0))
	{
		printf("2 quad");
	}
	else if((x>0)&&(y<0))
	{
		printf("3 quad");
	}
}
