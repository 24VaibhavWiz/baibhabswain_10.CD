#include"stdio.h"
main()
{
	int n;
	double gm,od;
	printf("1: Carbon Monoxide\n");
	printf("2: Hydrocarbons\n");
	printf("3: Nitrogen Oxide\n");
	printf("4: Nonmethane Hydrocarbon\n");	
	printf("Please enter the pollutant number\n");
	scanf("%d",&n);
	printf("Please enter the number of grams emitted per mile\n");
	scanf("%lf",&gm);
	printf("Please enter the odometre reading\n");
	scanf("%lf",&od);
	if ((n==1)&&(gm<=.31)&&(od<=50000))
		printf("Emission under permitted level of .031 grams/mile");
	else if((n==1)&&(gm>.31)&&(od<=50000))
		printf("Emission exceed permitted level of .031 grams/mile");
	else if ((n==1)&&(gm<=.39)&&(od>50000))
		printf("Emission under permitted level of .039 grams/mile");	
	else if ((n==1)&&(gm>.39)&&(od>50000))
		printf("Emission exceed permitted level of .039 grams/mile");
	if ((n==2)&&(gm<=.31)&&(od<=50000))
		printf("Emission under permitted level of .031 grams/mile");
	else if((n==2)&&(gm>.31)&&(od<=50000))
		printf("Emission exceed permitted level of .031 grams/mile");
	else if ((n==2)&&(gm<=.39)&&(od>50000))
		printf("Emission under permitted level of .039 grams/mile");	
	else if ((n==2)&&(gm>.39)&&(od>50000))
		printf("Emission exceed permitted level of .039 grams/mile");
	if ((n==3)&&(gm<=.31)&&(od<=50000))
		printf("Emission under permitted level of .031 grams/mile");
	else if((n==3)&&(gm>.31)&&(od<=50000))
		printf("Emission exceed permitted level of .031 grams/mile");
	else if ((n==3)&&(gm<=.39)&&(od>50000))
		printf("Emission under permitted level of .039 grams/mile");	
	else if ((n==3)&&(gm>.39)&&(od>50000))
		printf("Emission exceed permitted level of .039 grams/mile");
	if ((n==4)&&(gm<=.31)&&(od<=50000))
		printf("Emission under permitted level of .031 grams/mile");
	else if((n==4)&&(gm>.31)&&(od<=50000))
		printf("Emission exceed permitted level of .031 grams/mile");
	else if ((n==4)&&(gm<=.39)&&(od>50000))
		printf("Emission under permitted level of .039 grams/mile");	
	else if ((n==4)&&(gm>.39)&&(od>50000))
		printf("Emission exceed permitted level of .039 grams/mile");							
}
