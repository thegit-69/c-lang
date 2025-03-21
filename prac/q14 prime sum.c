//this qsn i have dbt dont use this code
#include<stdio.h>
void main()
{
	int i,n,sum=0,count=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if (n%i==0)
		{	
			sum=sum+i;
			count++;
		}		
	}
	if(count==2)
	{
	printf("prime sum = %d",sum);
	}
	else
	{
		printf("please give prime number as input");
	}
}