#include<stdio.h>
void main()
{
	int r,n,sum=0;
	scanf("%d",&n);
	int ognum=n;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		sum=sum+(r*r*r);
	}
	if(ognum==sum)
	{
		printf("armstrong");
	}
	else
	{
		printf("not armstrong");
	}
		
}