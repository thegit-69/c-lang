//inverted right triangle
#include<stdio.h>
void main()
{
	int i,j,star=3;
	for(i=1;i<=3;i++)
	{
		for(j=star;j>=1;j--)
		{
			printf("*");
		}
		printf("\n");
		star--;
	}
}