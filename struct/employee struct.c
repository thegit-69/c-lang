/**************************************
 * Program: 	Employee struct
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
struct employee
{
  int id,hi,r,t;
};
void main()
{
  printf("ID\tHLT INSUR.\tRTIR\tPAID TIME OFF\n");
  struct employee s[3];
  int i;
  for(i=0;i<3;i++)
  {
    scanf("%d %d %d %d",&s[i].id,&s[i].hi,&s[i].r,&s[i].t);
    printf("%d\t%d\t\t%d\t%d\n",s[i].id,s[i].hi,s[i].r,s[i].t);
  }
  
} 