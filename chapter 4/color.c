#include"stdio.h"
main()
{
	char ch;
	printf("Please enter the character \n");
	scanf("%c",&ch);
	if((ch=='b')||(ch=='B'))
	{
		printf("brown - carbon monoxide");
	}
	else if((ch=='o')||(ch=='O'))
	{
		printf("orange - ammonia");
	}
	else if((ch=='y')||(ch=='Y'))
	{
		printf("yellow - hydrogen");
	}
	else if((ch=='g')||(ch=='G'))
	{
		printf("green - oxygen");
	}
}
