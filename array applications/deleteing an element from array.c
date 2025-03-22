/**************************************
 * Program: 	deleting an element from an array
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
  int a[4]={4,5,6,8};
  int b[3];
  int i,j=0,r;
  scanf("%d",&r);
  for(i=0;i<4;i++)
  {
    if(a[i]!=r)
    {
      b[j]=a[i];
      j++;
    }
  }
  for(i=0;i<3;i++)
  {
    printf("%d\n",b[i]);
  }
}