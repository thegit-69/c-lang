/**************************************
 * Program: 	trace of matrix
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
  int a[3][3]={{10,2,3},{4,5,6},{7,8,90}};
  int i,j,sumd=0;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(i==j)
      {
        sumd=sumd+a[i][j];
      }
    }
  }
  printf("%d",sumd);
}