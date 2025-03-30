/**************************************
 * Program: 	DECIMal to BINARY
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
int main()
{
	int i=1,n=125,r,bin=0;
	while(n>0)
	{
		r=n%2;
		n=n/2;
		bin=bin+(r*i);
		i=i*10;
	}
	printf("%d",bin);
	return 0;
}