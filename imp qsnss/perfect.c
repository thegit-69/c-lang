//perfect square e.g 9 is a perfect square as 3x3=9
//10 is not a perfect square
#include<stdio.h>
int main()
{
	int i,n,product,count=0;
	printf("Enter n = ");
	scanf("%d",&n);
	int ognum=n;
	for(i=1;i<=n;i++)
	{
		product=i*i;
		if(product==ognum)
		{
			count++;
		}
	}
	if(count==1)
	{
		printf("%d is a perfect square",ognum);
	}
	else
	{
		printf("%d is NOT a perfect square",ognum);
	}
	return 0;
}