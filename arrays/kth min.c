/**************************************
 * Program: 	kth minima i.e a[k-1]
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
	int a[5]={1,5,69,33,175};
	int i,j,k,temp;
	printf("Enter k=");
	scanf("%d",&k);
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
	printf("Ascending order:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("%dth minima = %d",k,a[k-1]);
}