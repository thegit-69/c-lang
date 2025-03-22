/**************************************
 * Program: 	CAR.
 * By Author: 	DASARATH.C
 **************************************/	
#include<stdio.h>
struct car
{
  char comp[20],model[20];
  int year;
};
void main()
{
  int i;
  struct car c[2];
  for(i=0;i<2;i++)
  {
  scanf("%s %s",&c[i].comp,&c[i].model);
  scanf("%d",&c[i].year);
  printf("%s make \n%s model",c[i].comp,c[i].model);
  printf("\n%d year\n",c[i].year);
  }
}
 