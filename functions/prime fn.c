/**************************************
 * Program: 	prime r not
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void prime(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("%d is a prime",n);
	}
	else
	{
		printf("%d is NOT a prime",n);
		
	}
}
int main()
{
	int x;
	printf("Enter number = ");
	scanf("%d",&x);
	prime(x);
	return 0;
}