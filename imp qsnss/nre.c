#include<stdio.h>
int main()
{
	int array[]={1,2,3,4,5,6,7,8};
	int n;
	n = sizeof(array)/sizeof(array[0]);
	printf("%d",n);
	return 0;
}