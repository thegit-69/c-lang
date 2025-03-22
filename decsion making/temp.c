/**************************************
 * Program: 	Hot,warm,cold
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
  int t;
  scanf("%d",&t);
  if(t>=20)
  {
	printf("warm");
  }
  else if (t>=30)
  {
    printf("hot");
  }
  else if(t<20)
  {
    printf("cold");
  }
  
}