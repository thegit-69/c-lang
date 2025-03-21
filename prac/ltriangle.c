#include<stdio.h>
void main()
{
	int s,i,j,star=1,sp=2;
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
		star++;
		printf("\n");
	}
}