//armstrong no.: 153=1^3 + 5^3 + 3^3 =1+125+27,
//similar to sum of n but here sum=sum+r*r*r
#include<stdio.h>
void main()
{
	int n,r,sum=0;
	scanf("%d",&n);
	int a=n;
	while (n>0)
	{
	r=n%10;
	sum=sum+(r*r*r);
	n=n/10;
	}
	if (sum==a)
	{
		printf("armstrong number");
	}
	else
	{
		printf(" not armstrong number");
	}
}
