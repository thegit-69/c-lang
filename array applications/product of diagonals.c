/**************************************
 * Program: 	product of diagonals
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
  int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  int i,j,product=1;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(i==j)
      {
       product=product*a[i][j];
      }
    }
  }
  printf("%d",product);
}