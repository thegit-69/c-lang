/**************************************
 * Program: 	2nd maxima
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
	int a[5]={69,153,879,55,3};
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
	printf("2nd maxima = %d",a[3]);
}