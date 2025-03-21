#include<stdio.h>
void main()
{
	float a,b,sum,difference,product,quotient;
	//here inputs "a" and "b" can be any number either an integer or a float(decimal number)
	scanf("%f %f",&a,&b);
	sum=a+b;difference=a-b;product=a*b;quotient=a/b;
	printf("sum=%f""\ndifference=%f""\nproduct=%f",sum,difference,product);
	if (b==0)
	{
		printf("\ndivision by 0 is undefined");
	}
	else
	{
		printf("\nquotient=%f",quotient);
	}
}
//by DASARATH.C
