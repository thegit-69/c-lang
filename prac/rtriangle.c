#include<stdio.h>
void main()
{
	int i,j,star=1;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=star;j++)
		{
			printf("*");
		}
		star++;
		printf("\n");
		
	}
}