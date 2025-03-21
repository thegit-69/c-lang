#include<stdio.h>
void main()
{
	int i,s,j,sp=0,star=3;
	for(i=1;i<=3;i++)
	{
		for(s=1;s<=sp;s++)
		{
			printf(" ");
		}
		sp++;
		for(j=star;j>=1;j--)
		{
			printf("*");
		}
		star--;
		printf("\n");
	}
}