//prime no a no exacatly divisible by only 1 and itself
#include<stdio.h>
int main()
{
	int i,n,count=0;
	printf("Enter n = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("%d is prime number",n);
	}
	else
	{
		printf("%d is NOT prime number",n);
	}
	return 0;
}