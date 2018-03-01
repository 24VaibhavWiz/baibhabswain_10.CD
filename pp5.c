#include"stdio.h"
#include"math.h"
int is_prime(int num)
{
     int i=2;
     int flag = 0;
     int m=sqrt(num);
     while(i<=m)
    {
        if(m%i==0)
        {
            flag=1;
            break;
        }
	i++;
    }
    if (flag==0)
        return 1;
    else
       return 0; 
}
void output(int num)
{		
	if((num%7==0)||(num%11==0)||(num%13==0))
	{
		if(num%7==0)
			printf("divisble by 7 %d\n",num);
		else if(num%11==0)
			printf("divisible by 11 %d\n",num);
		else
			printf("divisible by 13 %d\n",num);
	}
	else if(num%2==0)
	{
		printf("the number is even %d\n",num);
	}
	else if(num%2!=0)
	{
		printf("the number is odd %d\n",num);
	}
	else if(num==is_prime(num))
	{
		printf("the number is prime %d\n",num);
	}
}
main()
{
	int num;
	int n,i=1;
	printf("Please enter the number of elements\n");
	scanf("%d",&n);
	printf("enter the numbers\n");
	while(i<=n)
	{
		scanf("%d",&num);
		output(num);
	}
}
