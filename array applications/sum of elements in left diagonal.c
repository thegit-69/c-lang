/**************************************
 * Program: 	sum of elements in left diagonal
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
  int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  int i,j=2,sum=0;
  for(i=0;i<3;i++)
  {
    {
      sum=sum+a[i][j];
      j--;
    }
  }
  printf("%d",sum);
} 