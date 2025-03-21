/**************************************
 * Program: 	max and min of an array
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
	int a[4]={-88,2,315,77};
	int i,max=a[0],min=a[0];
	for(i=0;i<4;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		else if(a[i]<min)
		{
			min=a[i];
		}
		
	}
	printf("max = %d\nmin = %d",max,min
	);
}