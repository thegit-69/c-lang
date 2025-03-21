
/**************************************
 * Program: 	median of array
 * By Author: 	DASARATH.C
 **************************************/
 //1st do ascending order the use maths
#include<stdio.h>
void main()
{
	int i,n,j,temp,median;
	printf("Enter size of array = ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				//swap
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Ascending order:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	if(n%2==0)//n is even then 2 middle terms avg
	{
		median=(a[n/2]+a[(n/2)+1])/2;
		printf("median = %d",median);
	}
	
}