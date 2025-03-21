#include<stdio.h>
void main()
{
	int i,a=8,b=12,gcd,lcm;
	for(i=1;i<=a && i<=b;i++)
	{
		if (a%i==0 & b%i==0)
		{
			gcd=i;
		}
	}
	lcm=(a*b)/gcd;
	printf("gcd=%d lcm=%d",gcd,lcm);
}