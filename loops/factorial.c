//factorial
#include<stdio.h>
void main()
{
	int i,n,fact=1;
	printf("Enter the number you want to find factorial = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial = %d",fact);
}