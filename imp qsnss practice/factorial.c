//factorial==product of 1st n nos
#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("Enter n = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial of %d is %d",n,fact);
	return 0;
}