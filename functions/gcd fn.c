/**************************************
 * Program: 	gcd fn with numbers as parameters
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
int gcd(int a,int b)
{
	int i,g;
	for(i=1;i<=a && i<=b;i++)
	{
		if(a%i==0 && b%i==0)
		{
			g=i;
		}
	}
	return(g);
}
void main()
{
	printf("gcd = %d",gcd(5,10));
}

















/*/int main()
{
	int a=8,b=12,gcd;
	int i;
	for(i=1;i<=a &&i<=b;i++)
	{
		if(a%i==0 && b%i==0)
		{
			gcd=i;
		}
	}
	printf("%d",gcd);
	return 0;
}/*/