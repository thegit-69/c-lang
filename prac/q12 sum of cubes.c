#include<stdio.h>
void main()
{
	int i,n,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(i*i*i);
	}
	printf("sum of cubes = %d",sum);
}