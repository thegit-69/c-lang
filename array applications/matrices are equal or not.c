/**************************************
 * Program: 	matrices are equal or not.
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
  int a1[3]={1,2,4};
  int a2[3]={1,2,3};
  int i,count=0;
  for(i=0;i<3;i++)
  {
    if(a1[i]==a2[i])
    {
      count++;
    }
   }
  if(count==3)
  {
	printf("equal");
  }
    else
    {
	  printf("not equal");
    }
}