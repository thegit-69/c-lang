//sum and avg of 4 nos
#include<stdio.h>
void main()
{
	float a,b,c,d,sum,avg;
	printf("Enter 4 numbers = ");
	scanf("%f %f %f %f",&a,&b,&c,&d);
 	sum=a+b+c+d;
 	avg=sum/4;
 	printf("sum=%.2f  average=%.2f",sum,avg);
}