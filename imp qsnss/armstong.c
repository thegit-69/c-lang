//armstrong no==153=1^3+5^3+3^3
#include<stdio.h>
int main()
{
	int r,n,sum;
	printf("Enter n = ");
	scanf("%d",&n);
	int ognum=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(ognum==sum)
	{
		printf("%d is an armstrong number",ognum);
	}
	else
	{
		printf("%d is NOT an armstrong number",ognum);
	}
	return 0;
}