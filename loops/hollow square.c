//hollow square
#include<stdio.h>
void main()
{
	int i,j,star=4;
	for(i=1;i<=star;i++)
	{
		for(j=1;j<=star;j++)
		{
			if((i==2 || i==3)&(j==2 || j==3))
			printf(" ");
			else
			{
				printf("*");	
			}
		}
		printf("\n");
	}
}