/**************************************
 * Program: 	equal or not 
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
	int a[3]={1,2,3};
	int b[3]={1,21,3};
	int count=0,i;
	for(i=0;i<3;i++)
	{
		if(a[i]==b[i])
		{
			count++;
		}
	}
	if (count==3)
	{
		printf("equal");
	}
	else
	{
		printf("Not equal");
	}
}