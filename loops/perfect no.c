//perfect no
// u dont know perfect no just GOOGLE IT man!!
#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter Number = ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("PERFECT NUMBER");
	}
	else
	{
		printf("NOT a perfect number");
	}
}