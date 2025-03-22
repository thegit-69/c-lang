/**************************************
 * Program: 	multiply two matrices
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
  int a[2][2]={{2,3},{5,1}};
  int b[2][2]={{1,2},{3,4}};
  int c[2][2]={0};
  int i,j,k;
  for(i=0;i<2;i++)
  {
	for(j=0;j<2;j++)
    {
      for(k=0;k<2;k++)
      {
        c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
      }
      printf("%d ",c[i][j]);
    }
    printf("\n");
  }
}
