//sum of 1st n natural numbers
#include<stdio.h>
int main()
{
	int i,sum=0,n;
	printf("Enter n = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum of 1st n natural numbers = %d",sum);
	
	return 0;
}