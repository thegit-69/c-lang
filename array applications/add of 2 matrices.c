/**************************************
 * Program: 	addition of 2 matrices
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
  int a[2][2]={{1,2},{3,4}};
  int b[2][2]={{1,2},{3,4}};
  int c[2][2];
  int i,j,sum=0;
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      printf("%d ",a[i][j]+b[i][j]);
    }
    printf("\n");
  }
}