/**************************************
 * Program: 	min of array
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
	int a[5]={100,2,3,8,6};
	int i,min=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("min = %d",min);
}