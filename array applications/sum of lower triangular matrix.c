/**************************************
 * Program: 	sum of lower triangular matrix
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
  int a[3][3]={{1,0,0},{4,5,0},{7,8,9}};
  int i,j,sum=0;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(i>=j)
      {
        sum=sum+a[i][j];
      }
    }
  }
  printf("%d",sum);
}