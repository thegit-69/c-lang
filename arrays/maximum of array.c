/**************************************
 * Program: 	maximum of array
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
	int a[4]={7,8,9,5};
	int i,max=a[0];
	for(i=0;i<4;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("max = %d",max);
	
}