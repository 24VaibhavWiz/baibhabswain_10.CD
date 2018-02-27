#include"stdio.h"
main()
{
	int i=1,j=1,num;
	printf("Please enter the range\n");
	scanf("%d",&num);
	printf("The output is\n");
	while(i<=j)
	{
		if(j>num)
		break;
		if(i==j)
		{
			printf("%d ",i);
			printf("\n");
			i=1;
			j++;
		}
		else 
		{
			printf("%d ",i);
			i++;
		}
	}		
}
