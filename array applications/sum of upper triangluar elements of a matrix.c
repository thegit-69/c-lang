/**************************************
 * Program: 	sum of upper triangluar elements of a matrix
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
  int a[3][3]={{1,2,3},{0,5,6},{0,0,9}};
  int i,j,sum=0,x;
  for(i=0;i<3;i++)
  {
	for(j=0;j<3;j++)
    {
       
      if(i<=j)//upper triangluar matrix condition
      {
		sum=sum+a[i][j];
      }
    }
  }
  printf("%d",sum);
}