/****************************************
 * Program: 	array in ascending order
 * By Author: 	DASARATH.C
 ****************************************/
#include<stdio.h>
void main()
{
	int a[5]={69,66,85,887,1};
	int i,j,temp;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];//swap
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
}