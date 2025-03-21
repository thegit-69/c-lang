//r-triangle
#include<stdio.h>
void main()
{
	int i,star=1,j;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=star;j++)
		{
			printf("*");
		}
		printf("\n");
		star++;
	}
}