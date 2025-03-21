/**************************************
 * Program: 	swap 2 nos using fn and numbers as parameters
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("%d %d",*x,*y);
}
int main()
{
	int a=4,b=7;
	swap(&a,&b);
}





























/*/#include<stdio.h>
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("%d %d",*x,*y);
}
int main()
{
	int a=4,b=6;
	swap(&a,&b);
	return 0;
}/*/