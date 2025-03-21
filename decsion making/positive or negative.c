#include<stdio.h>
void main()
{
	int a;
	scanf("%d",&a);
	if(a>0)
	{
		printf("%d is a postive number",a);
	}
	else if (a<0)
	{
		printf("%d is negative number",a);
	}
	else
	{
		printf("zero is neither positive nor negative");
	}
}