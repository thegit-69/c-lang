//sum of digits
#include<stdio.h>
int main()
{
	int i,sum=0,n,r;
	printf("Enter n= ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("Sum of digits = %d",sum);
	return 0;
}