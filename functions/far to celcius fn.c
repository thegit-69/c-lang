/**************************************
 * Program: 	farheiet to celcius conversion using fn with far as paremeter
 * By Author: 	DASARATH.C
 **************************************/
 
//f-->c
//c=(f-32)/1.8
 
#include<stdio.h>
float temp(float far)
{
	float c;
	c=(far-32)/1.8;
	return (c);
}
void main()
{
	float x;
	printf("Enter in Farhenihet = ");
	scanf("%f",&x);
	printf("%.2f",temp(x));
}