//poweer of a number
//2 types 1 without <math.h> & 2 with math.h
//type 2
#include<stdio.h>
#include<math.h>
int main()
{
	int n,x,power;
	printf("Enter base(n) = ");
	scanf("%d",&n);
	printf("Enter exponent(x) = ");
	scanf("%d",&x);
	power=pow(n,x);
	printf("power = %d",power);
	return 0;
}



/*/type -1 
#include<stdio.h>
int main()
{
	int i,n,power=1,x;//x= exponent,n=base
	printf("Enter base(n) = ");
	scanf("%d",&n);
	printf("Enter exponent(x) = ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		power=power*n;
	}
	printf("power = %d",power);
	return 0;
}/*/