/**************************************
 * Program: 	sum of array using fn
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
int sum(int *a)
{
  int i,add=0;
  for(i=0;i<5;i++)
  {
    add=add+a[i];
  }
  return(add);
}
int main()
{
  int x[5]={1,2,3,4,5};
  printf("sum of elements = %d",sum(x));
  return 0;
}