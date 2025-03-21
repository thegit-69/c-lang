#include<stdio.h>
void main()
{
	int a=15,b=256,temp;
	temp=a;
	a=b;
	b=temp;
	printf("%d %d",a,b);
}