#include<stdio.h>
void main()
{
	int n,i,t;
	printf("Enter which table u want = ");
	scanf("%d",&n);
	for (i=1;i<=10;i++)
	{
		t=n*i;
		printf("\n%d ",t);
	}
}
