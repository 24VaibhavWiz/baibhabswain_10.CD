#include"stdio.h"
main()
{
        int  days,count1=0,count3=0,count2=0;
        double temp;
        int i=0;
	double avg=0.0;
        printf("Please enter the total numbers of days to observed\n");
        scanf("%d",&days);
        while(i<=days)
        {
                printf("Please enter the tempretures\n");
                scanf("%lf",&temp);
		avg=avg+(double)temp/days;
                if(temp>=85)
                        count1+=1;
                else if(temp<85 && temp>=60)
                        count2+=1;
                else if(temp<60)
                        count3+=1;
                i=i+1;
        }
        printf("no of hot days %d\nno of avg temp days %d\nno of cold days %d\n",count1,count2,count3);
	printf("The averege is %f\n",avg);
}