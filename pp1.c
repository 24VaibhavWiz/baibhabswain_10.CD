#include"stdio.h"
main()
{	
	int amount,fif,ten,twn;
	printf("Please enter the amount in dollars(a multiplr=e of 10)\n");
	scanf("%d",&amount);
	dispense(amount,&fif,&twn,&ten);
	printf("Entered amount is : %d\n",amount);
	if(amount%10==0)
	{
		printf("10s : %d\n",ten);
		printf("20s : %d\n",twn);
		printf("50s : %d\n",fif);
	}
	else
		printf("invaid entry\n");
	
}
int dispense(int amount,int *fif,int *twn,int *ten)
{
		*fif=amount/50;
		amount=amount%50;
		*twn=amount/20;
		amount=amount%20;
		*ten=amount/10;
		amount=amount%10;
}
