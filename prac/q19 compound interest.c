#include<stdio.h>
void main()
{
	float i,c,p=100,r=100,n=2,product=1;
	float b=(1+(r/100));
	for(i=1;i<=n;i++)
	{
		product=product*b;
	}
	c=(p*product)-p;
	printf("COMPOUND INTEREST = %f",c);
}