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
	if ((yr%400==0)&&(yr%100==0))	
	{
		printf("entered year is a leap year\n");
		if(month==1)
		{
			final=day;
			rem=366-day;
		}
		else if(month==2)
		{
			final=day+31;
			rem=366-final;
		}
		else if(month==3)
		{
			final=day+60+1;
			rem=366-final;
		}
		else  if(month==4)
		{
			final=day+90+1;
			rem=366-final;
		}
		else if(month==5)
		{
			final=day+121+1;
			rem=366-final;
		}
		else if(month==6)
		{
			final=day+151+1;
			rem=366-final;
		}
		if(month==7)
		{
			final=day+181+1;
			rem=366-final;
		}
		else if(month==8)
		{
			final=day+212+1;
			rem=366-final;
		}
		else if(month==9)
		{
			final=day+243+1;
			rem=366-final;
		}
		else  if(month==10)
		{
			final=day+273+1;
			rem=366-final;
		}
		else if(month==11)
		{
			final=day+304+1;
			rem=366-final;
		}
		else if(month==12)
		{
			final=day+334+1;
			rem=366-final;
	}	}
	else
	{
		
		printf("entered year is not a leap year\n");
		if(month==1)
		{
			final=day;
			rem=365-day;
		}
		else if(month==2)
		{
			final=day+31;
			rem=365-final;
		}
		else if(month==3)
		{
			final=day+60;
			rem=365-final;
		}
		else  if(month==4)
		{
			final=day+90;
			rem=365-final;
		}
		else if(month==5)
		{
			final=day+121;
			rem=365-final;
		}
		else if(month==6)
		{
			final=day+151;
			rem=365-final;
		}
				if(month==7)
		{
			final=day+181;
			rem=365-final;
		}
		else if(month==8)
		{
			final=day+212;
			rem=365-final;
		}
		else if(month==9)
		{
			final=day+243;
			rem=365-final;
		}
		else  if(month==10)
		{
			final=day+273;
			rem=365-final;
		}
		else if(month==11)
		{
			final=day+304;
			rem=365-final;
		}
		else if(month==12)
		{
			final=day+334;
			rem=365-final;
		}
	}
	printf("The nTH days is %d and remaining days left are %d\n",final,rem);
}

