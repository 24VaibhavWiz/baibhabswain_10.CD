#include"stdio.h"
main()
{
        double price,total=0,sum=0,tax,final=0;
        printf("Please enter your choice \n");
        int choice;
        scanf("%d",&choice);
        printf("Please enter the total purchase price \n");
        scanf("%lf",&price);
        if(choice==1)
{
        printf("Total purchases: %f \n",price);
        if(price>100)
        {
                total=total+(price*0.12);
                sum=sum+(price-total);
                printf("Teacher's discount (12%): %f \n",total);
                printf("Discounted total: %f \n",sum);
                tax=0.05*sum;
                final=final+tax+sum;
        }
        else if(price<=100)
        {
      
                total=total+(price*0.10);
                sum=sum+(price-total);
                printf("Teacher's discount (12%): %f \n",total);
                printf("Discounted total: %f \n",sum);
                tax=0.05*sum;
                final=final+tax+sum;
        }
}
        else
        {
                total=total+price;
                sum=sum+total;
                tax=0.05*sum;
                final=final+tax+sum;
        }
        printf("The tax rate of 5%%: %f \n",tax);
        printf("The final price: %f \n",final);
}
                                


