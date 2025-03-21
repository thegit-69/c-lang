#include<stdio.h>
void main()
{
	int a=35,b=74;
	a=a-b;
	b=a+b;
	a=b-a;
	printf("%d %d",a,b);
}