/**************************************
 * Program: 	area of circle r=parameter using fn
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
float area(int r)
{
	return(3.14*r*r);
}
void main()
{
	int radius;
	printf("Enter radius = ");
	scanf("%d",&radius);
	printf("Area of circle = %.2f",area(radius));
}