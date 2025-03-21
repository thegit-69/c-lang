//
/**************************************
 * Program: 	reversing an array
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
	int a[4]={1,2,3,4};
	int b[4];
	int i,j=3;
	for(i=0;i<4;i++)
	{
		b[i]=a[j];
		j--;
		printf("%d ",b[i]);
	}
}