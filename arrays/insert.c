/**************************************
 * Program: 	insert an element accord to arr index
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
	int a[3]={1,2,3};
	int b[4];
	int i,x,n,j=0;
	printf("Enter the element = ");
	scanf("%d",&x);
	printf("Enter arr index = ");
	scanf("%d",&n);
	for(i=0;i<4;i++)
	{
		if(n==i)
		{
			b[i]=x;
		}
		else
		{
			b[i]=a[j];//a[j] is VV imp bigilu
			j++;
		}
	}
	for(i=0;i<4;i++)
	{
		printf("%d\n",b[i]);
	}
}