#include<stdio.h>
void main()
{
	int r,n,sum=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;	
	}
	printf("sum of digits = %d",sum);
}