/**************************************
 * Program: 	asc order arr using fn with array as parameters
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void asc(int *a)
{
	int i,j,temp;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				//swap 2 nos
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
}
int main()
{
	int a[5]={69,143,65,3295,55};
	asc(a);
	return 0;
}