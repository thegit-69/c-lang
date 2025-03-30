//perfect number
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter n = ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(n==sum)
	{
		printf("%d is a PERFECT NUMBER",n);
	}
	else
	{
		printf("%d is NOT a PERFECT NUMBER",n);
	}
	return 0;
}