/**************************************
 * Program: 	Multiple of 3 or 5
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
 int a;
 scanf("%d",&a);
 if (a%3==0 & a%5==0)
 {
   printf("%d is a multiple of both 3 and 5");
 }
  else if(a%3==0)
 {
   printf("%d is a multiple of 3");
 }
  else if(a%5==0)
  {
    printf("%d is a multiple of 5");
  }
  else
  {
   printf("%d is neither a multiple of 3 nor 5");
  }
}