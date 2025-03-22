/**************************************
 * Program: 	determinant of a 2x2 matrix.
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
  int a[2][2]={{3,2},{4,3}};
  int i,j=1,det;
  for(i=0;i<2;i++)
  {
    {
      det=(a[i][i]*a[j][j]-a[i][j]*a[j][i]);
      j--;
    }
  }
  printf("determinant value = %d",det);
}