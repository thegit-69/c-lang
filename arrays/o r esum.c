/**************************************
 * Program: 	sum of elements @even & odd postions
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
	int a[4]={4,8,50,3};
	int i,esum=0,osum=0;
	for(i=0;i<4;i++)
	{
		if(i%2==0)
		{
			esum=esum+a[i];
		}
		else 
		{
			osum=osum+a[i];
		}
	}
	printf("esum = %d\nosum=%d",esum,osum);
}