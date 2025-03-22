/**************************************
 * Program: 	bank
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
struct bank
{
  char n[20],add[20];
  float bal;
  int ph;
};
void main()
{
  int i;
  printf("NAME\t ADDRESS\tBALANCE\t PHONENO\n");
  struct bank c[3];
  for(i=0;i<3;i++)
  {
  scanf("%s %s",c[i].n,c[i].add);
  scanf("%f %d",&c[i].bal,&c[i].ph);
  printf("%s\t %s\t",c[i].n,c[i].add);
  printf("	%.2f\t",c[i].bal);
  printf(" %d\n",c[i].ph);
  }
} 