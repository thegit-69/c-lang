#include<stdio.h>
void main()
{
	int i,sum=0,n;
	printf("Enter n= ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("Sum of natural numbers = %d",sum);
}