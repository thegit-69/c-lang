/**************************************
 * Program: 	Average of elements in array
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
	int a[5]={1,2,3,4,5};
	int i;
	float avg,sum=0;
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	printf("%.2f",avg=sum/5);
}