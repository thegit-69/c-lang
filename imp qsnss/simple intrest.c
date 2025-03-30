//simple intrest = (p*t*r)/100
#include<stdio.h>
float main()
{
	float p,t,r,si;
	printf("Enter p = ");
	scanf("%f",&p);
	printf("Enter t = ");
	scanf("%f",&t);
	printf("Enter r = ");
	scanf("%f",&r);
	si=(p*t*r)/100;
	printf("SIMPLE INTREST = %.3f",si);
	return 0;
}