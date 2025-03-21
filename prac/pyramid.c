#include<stdio.h>
void main()
{
	int i,j,star=1,s,sp=2;
	for(i=1;i<=3;i++)
	{
		for(s=sp;s>=1;s--)
		{
			printf(" ");
		}
		sp--;
		for(j=1;j<=star;j++)
		{
			printf("*");
		}
		star=star+2;
		printf("\n");
	}
}