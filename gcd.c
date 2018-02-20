#include"stdio.h"
main()
{
	int n1,n2,gcd,i;
	printf("Please enter the numbers\n");
	scanf("%d%d",&n1,&n2);
	n1=(n1>0) ? n1:-n1;
	n2=(n2>0) ? n2:-n2;
	while(n1!=n2)
	{
		if(n1>n2)
			n1-=n2;
		else
			n2-=n1;
	}
	printf("GCD is %d\n",n1);
}	
	