/**************************************
 * Program: 	inverse of a 2x2 matrix.
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
  int a[2][2]={{30,8},{7,1}};
  int i,j,temp;
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      if(i==0 && j==0)
      {
        temp=a[0][0];
        a[0][0]=a[1][1];
        a[1][1]=temp;
      }
      if(i!=j)
      {
        a[i][j]=-(a[i][j]);
      }
    }
  }
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  
}