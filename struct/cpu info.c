/**************************************
 * Program: 	CPU info
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
struct cpu
{
  char man[20];
  float cs,nc;//cs=clockspeed nc=number of cores
};
void main()
{
  int i;
  struct cpu c[3]; 
  printf("manufacturer\t clock_speed\t cores\n");
  for(i=0;i<3;i++)
  {
  scanf("%s",c[i].man);
  scanf("%f %f",&c[i].cs,&c[i].nc);
  printf("%s	\t",c[i].man);
  printf(" %.2f GHz\t %.f cores\n",c[i].cs,c[i].nc);
  }
} 