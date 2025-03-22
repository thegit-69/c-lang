/**************************************
 * Program: 	product sturct
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
struct product
{
  int price,cost,q;
  char name[23];
};
void main()
{
  printf("NAME\tPRICE\tQUANTITY COST\n");
  struct product p[3];
  int i,total=0;
  for(i=0;i<3;i++)
  {
  scanf("%s %d %d",&p[i].name,&p[i].price,&p[i].q);
  p[i].cost=p[i].price*p[i].q;
  printf("%s\t %d\t %d\t %d\n",p[i].name,p[i].price,p[i].q,p[i].cost);
  total=total+p[i].cost;
  }  
  printf(" \t\ttotal =  %d",total);
} 