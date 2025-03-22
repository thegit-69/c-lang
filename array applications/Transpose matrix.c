/**************************************
 * Program: 	transpose of matrix(i=j)
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
  int a[2][2]={1,2,3,4};
  int at[2][2];
  int i,j;
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      at[i][j]=a[j][i];
      printf("%d ",at[i][j]);
    }
    printf("\n");
  }
}
