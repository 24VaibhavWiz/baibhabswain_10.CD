
#include "stdio.h"
int get_problem()
{
	char ch;
	printf("Select the form that you would like to convert to slope-intercept form\n");
	printf("A:-Two-point form (you know two points on the line)\n");
	printf("B:-Point-slope form (you know the line's slope and one point\n");
	scanf(" %c", &ch);
	return ch;
}
void get2_pt(double *x1, double *y1, double *x2, double *y2)
{
	printf("Enter the x-y coordinates of the first point separated by a space\n");
	scanf("%lf", &*x1);
	scanf("%lf", &*y1);
	printf("Enter the x-y coordinates of the second point separated by a space\n");
	scanf("%lf", &*x2);
	scanf("%lf", &*y2);
}
void get_pt_slope(double *x, double *y, double *slope)
{
	printf("Enter the slope\n");
	scanf("%lf", &*slope);
	printf("Enter the x-y coordinates of the point separated by a space\n");
	scanf("%lf", &*x);
	scanf("%lf", &*y);
}
void slope_intcpt_from2_pt(double x1, double y1, double x2, double y2, double *slope, double *b)
{
	*slope = ((y2 - y1) / (x2 - x1));
	*b = y1 - (*slope * x1);
}
double intcpt_from_pt_slope(double x, double y, double slope)
{
	return (y - (slope * x));
}
void display2_pt(double x1, double y1, double x2, double y2)
{
	printf("Two-point form\n");
	printf(" %3c (%.2f - %.2f)\n", ' ', y2, y1);
	printf("m = --------------\n");
	printf(" %3c (%.2f - %.2f)\n", ' ', x2, x1);
}
void display_pt_slope(double x, double y, double slope)
{
	printf("Point-slope form\n");
	printf("y – %.2f = %.2f(x – %.2f)\n", y, slope, x);
}
void display_slope_intcpt(double slope, double b)
{
	printf("Slope-intercept form\n");
	printf("y = %.2fx + %.2f\n", slope, b);
}
main()
{
	char choice;
	char ch = 'Y';
	while(ch == 'Y')
	{
		choice = get_problem();
		if(choice == 'A'||(choice == 'a'))
		{
			double x1, y1, x2, y2, slope, b;
			get2_pt(&x1, &y1, &x2, &y2);
			display2_pt(x1, y1, x2, y2);
			slope_intcpt_from2_pt(x1, y1, x2, y2, &slope, &b);
			display_slope_intcpt(slope, b);
		}
		else if(choice == 'B'||(choice == 'b'))
		{	
			double x, y, slope, b;
			get_pt_slope(&x, &y, &slope);
			display_pt_slope(x, y, slope);
			b = intcpt_from_pt_slope(x, y, slope);
			display_slope_intcpt(slope, b);
		}
		printf("Do another conversion (Y or N)\n");
		scanf(" %c", &ch);
	}
}