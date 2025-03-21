#include<stdio.h>
void main()
{
	float i,n,sum=0;
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(1/i);
	}
	printf("sum of series = %f",sum);
}