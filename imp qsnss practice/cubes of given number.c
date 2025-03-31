//cubes of given number
#include<stdio.h>
int main()
{
	int n,cube=1;
	printf("Enter n = ");
	scanf("%d",&n);
	cube=cube*(n*n*n);
	printf("cube of the given number = %d",cube);
	return 0;
}