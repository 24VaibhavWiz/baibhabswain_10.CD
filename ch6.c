#include "stdio.h"
#include "stdlib.h"
main()
{
	FILE *inp;
	FILE *outp;
	double item;
	int input_status;
	inp = fopen("indata.txt", "r");
	outp = fopen("outdata.txt", "w");
	input_status = fscanf(inp, "%lf", &item);
	while (input_status == 1)
 	{
		fprintf(outp, "%.2f\n", item);
		input_status = fscanf(inp, "%lf", &item);
	}
	fclose(inp);
	fclose(outp);
}
