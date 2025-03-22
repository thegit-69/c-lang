/**************************************
 * Program: 	inventory
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
struct inventory
{
  int n,p,total;
  char name[10];
};
void main()
{
  int i;
  printf("NAME\tUNITS\tPRICE PER UNIT\n");
  struct inventory s[3];
  for(i=0;i<3;i++)
  {
    scanf("%s\t%d\t%d",&s[i].name,&s[i].n,&s[i].p);
    printf("%s\t%d\t%d\n",s[i].name,s[i].n,s[i].p);
  }
} 