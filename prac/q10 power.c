#include<stdio.h>
void main()
{
	int i,b=3,n=4,product=1; //b=base n=power
	for(i=1;i<=n;i++)
	{
		product=product*b;
	}
	printf("power value = %d",product);
}