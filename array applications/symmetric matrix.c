/**************************************
 * Program: 	symmetric matrix
 * By Author: 	DASARATH.C
 **************************************/
//if a=a(transpose) then symmetric i.e a[i][j]==a[j][i]
#include<stdio.h>
void main()
{
  int a[3][3]={{1,2,3},{2,4,5},{3,5,8}};
  int t[3][3];// transpose of a matrix
  int i,j,count=0;
  for(i=0;i<3;i++)//this loop is for transposing matrix
  {
    for(j=0;j<3;j++)
    {
      t[i][j]=a[j][i];
    }
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(t[i][j]==a[i][j])
      {
        count++;
      }
    }
  }
  if(count==9)
  {
    printf("SYMMETRIC");
  }
  else
  {
    printf("NOT SYMMETRIC");
  }
}
 