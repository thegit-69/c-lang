/**************************************
 * Program: 	max of array using function
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
int max(int *a)
{
	int i,max=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("%d",max);
	return 0;
}
int main()
{
	int a[5]={69,55,4797,222,5};
	max(a);
	return 0;
	
}