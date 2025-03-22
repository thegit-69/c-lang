/**************************************
 * Program: 	if a matrix is diagonal or not.
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
  int a[3][3]={{1,0,0},{0,5,0},{0,0,9}};
  int i,j,count=0;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(i!=j & a[i][j]==0)
      {
        count++;
      }
    }
  }
  if(count==6)//BCZ 6 zeros are present
  {
    printf("DIAGONAL MATRIX");
  }
  else
  {
    printf("NOT A DIAGONAL MATRIX");
  }
} 