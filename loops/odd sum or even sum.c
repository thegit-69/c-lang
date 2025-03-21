#include<stdio.h>
void main()
{
	int i,n,osum=0,esum=0;
	printf("Enter n = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if (i%2!=0)
		{
		osum=osum+i;	
		}
		else
		{
			esum=esum+i;
		}
	}
	printf("odd sum = %d\neven sum = %d",osum,esum);
}
