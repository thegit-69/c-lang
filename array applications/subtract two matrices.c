/**************************************
 * Program: 	subtract two matrices.
 * By Author: 	DASARATH.C
 **************************************/
//sub 2 matrices
#include<stdio.h>
void main()
{
  int a[2][2]={{1,2},{3,4}};
  int b[2][2]={{1,2},{3,4}};
  int i,j;
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      printf("%d ",b[i][j]-a[i][j]);
    }
    printf("\n");
  }
}
