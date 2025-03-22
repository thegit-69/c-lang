/**************************************
 * Program: 	upper triangular or not.
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
  int a[3][3]={{1,2,3},{0,4,5},{0,0,6}};
  int i,j,count=0;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(i>j && a[i][j]==0)
      {
        count++;
      }
    }
  }
  if(count==3)
  {
    printf("UPPER TRIANGULAR MATRIX");
  }
  else
  {
    printf("NOT A UPPER TRIANGULAR MATRIX");
  }
} 