#include<stdio.h>
void main()
{
	int i,a=3,b=5,gcd,lcm;
	for(i=1;i<=a && i<=b;i++)
	{
	 if(a%i==0 && b%i==0)
	 gcd=i;
	}
	lcm=(a*b)/gcd; //lcm=a*b/gcd or lcm=product of given nos/gcd
	printf("lcm=%d gcd=%d",lcm,gcd);
}
