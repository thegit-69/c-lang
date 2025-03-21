/**************************************
 * Program: 	products of array elements
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
	int a[4]={1,2,3,5};
	int i,product=1;
	for(i=0;i<4;i++)
	{
		product=product*a[i];
	}
	printf("products of all elements in an array = %d",product);
}