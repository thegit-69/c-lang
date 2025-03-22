/**************************************
 * Program: 	factorial using recursion
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
int fact(int n)
{
  if(n==1)//base case of recursion
  {
    return 1;
  }
  else
  {
    return(n*fact(n-1));
  }
}
void main()
{
	int n=6,answer;
    answer=fact(n);
    printf("%d",answer);
}