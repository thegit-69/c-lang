/**************************************
 * Program: 	Store
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
struct age 
{
  int day,month,year;
};
void main()
{
  int i;
  struct age a[3];
  for(i=0;i<3;i++)
  {
  scanf("%d %d %d",&a[i].day,&a[i].month,&a[i].year);
  int md,age,dd;
  md=2-a[i].month;//md = month diff
  dd=25-a[i].day;//dd=day diff
  age=2025-a[i].year;
  if(md>=0 & dd>=0)
  {
    printf("age = %d\n",age);
  }
  else
  {
    printf("age = %d\n",age-1);
  }
  }
} 