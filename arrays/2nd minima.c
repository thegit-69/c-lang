/**************************************
 * Program: 	2nd minima
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
	int a[5]={69,55,23,88,645};
	int i,j,temp;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("2nd minima = %d",a[1]);
	
}