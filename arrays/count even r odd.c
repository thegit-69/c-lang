/**************************************
 * Program: 	count E-O elements
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
	int a[4]={1,21,3,4};
	int i,ec=0,oc=0;
	for(i=0;i<4;i++)
	{
		if(a[i]%2==0)
		{
			ec++;
		}
		else
		{
			oc++;
		}
	}
	printf("ecount = %d\nocount = %d",ec,oc);
}