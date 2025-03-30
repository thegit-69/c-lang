/**************************************
 * Program: 	digit = count no of digitss 
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
int main()
{
	int r,n,count=0,i;
	printf("Enter n = ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		count++;
		n=n/10;
	}
	printf("Number of digits = %d",count);
	return 0;
}