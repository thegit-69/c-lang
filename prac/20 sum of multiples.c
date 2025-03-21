#include<stdio.h>
void main()
{
	int i,n,product=1,x,sum=0; //n= till where u want ,x =table
	scanf("%d %d",&x,&n);
	for(i=1;i<=n;i++)
	{
		product=x*i;
		sum=sum+product;
	}	
	printf("sum of multiples = %d",sum);
}