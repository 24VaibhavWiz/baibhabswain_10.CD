#include"stdio.h"
main()
{
	int yr,day,month,final,rem;
	printf("Please enter the year of your choice \n");
	scanf("%d",&yr);
	printf("Please enter the date of your choice \n");
	scanf("%d",&day);
	printf("Please enter the month of your choice \n");
	scanf("%d",&month);
	int mn=(month/2);
	if ((yr%400==0)&&(yr%100==0))	
	{
		printf("entered year is a leap year\n");
		if(month<2)
		{
			final=(month-1)*31+day;
		}
		else if(month==2)
		{
			final=31+day;
		}
		else if((month%2==0)&&(month<=7)&&(month>2))
		{
			final=(((((month-1)*30)-mn)-1)-1)+day;
		}
		else if((month%2!=0)&&(month<=7)&&(month>2))
		{
			final=(((((month-1)*31)-mn)-1)-1)+day;	
		}
		else if((month%2==0)&&(month>7)&&(month>2))
		{
			final=(((((month-1)*31)-mn)-1)-1)+day+2;
		}
		else if((month%2!=0)&&(month>7)&&(month>2))
		{
			final=((((month-1)*30-mn)-1)-1)+day+2;
		}
		rem=366-final;
	}
	else
	{
		printf("entered year is not a leap year\n");
		if(month<2)
		{
			final=(month-1)*31+day;
		}
		else if(month==2)
		{
			final=31+day;
		}
		else if((month%2==0)&&(month<=7)&&(month>2))
		{
			final=(((((month-1)*30)-mn)-1)-2)+day;
		}
		else if((month%2!=0)&&(month<=7)&&(month>2))
		{
			final=(((((month-1)*31)-mn)-1)-2)+day;
		}
		else if((month%2==0)&&(month>7)&&(month>2))
		{
			final=(((((month-1)*31)-mn)-1)-2)+day+2;
		}
		else if((month%2!=0)&&(month>7)&&(month>2))
		{
			final=(((((month-1)*30)-mn)-1)-2)+day+2;
		}
		rem=365-final;
	}
		printf("The nTH day is %d and remaining days are %d \n",final,rem);
}

