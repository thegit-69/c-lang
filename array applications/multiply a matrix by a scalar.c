/**************************************
 * Program: 	multiply a matrix by a scalar.
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
  int a[2][2]={{1,2},{3,4}};
  int i,j,x;
  scanf("%d",&x);
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      printf("%d ",x*a[i][j]);
    }
    printf("\n");
  }
}