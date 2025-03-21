#include<stdio.h>
void main()
{
	int i,n,product=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		product=product*i;
	}
	printf("factorial=%d",product);
}