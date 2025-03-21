/**************************************
 * Program: 	deleted an element according to arr index
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
	int a[3]={1,2,3};
	int b[2];
	int i,n,j=0;
	printf("Enter the array index to delete = ");
	scanf("%d",&n);
	for(i=0;i<3;i++)
	{
		if(i!=n)
		{
			b[j]=a[i];
			j++;
		}
	}
	for(i=0;i<2;i++)
	{
		printf("%d\n",b[i]);
	}
}