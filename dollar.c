#include"stdio.h"
double fun(int year)
{
	int t=year-2005;
	while(t>=0)
		{
			return 33.2+(16.8*t);
		}
}
main()
{
	int year,t;
	while(year>2005)
	{
		printf("Please enter the year after 2005\n");
		scanf("%d",&year);
		printf("The the billions of dollars of fast food charges U.S. consumers will make in given year:$ %f\n",fun(year));
	}
}