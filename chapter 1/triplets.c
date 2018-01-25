#include"stdio.h"
main()
{
	int m,n;
	int side1,side2,hypo;
	printf("Please enter the value of m and n");
	scanf("&d&d",&m,&n);
	side1=m*m-n*n;
	side2 = 2*m*n;
	hypo = m*m + n*n;
	printf("pythogorean triplets %d"&side1);
	printf("pythogorean triplets %d"&side2);
	printf("pythogorean triplets %d"&side3);		
}
