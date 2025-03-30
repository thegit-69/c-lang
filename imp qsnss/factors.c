//factors or divisors oof a no
#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("Enter n = ");
	scanf("%d",&n);
	printf("Factors =\n");
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}