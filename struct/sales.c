/**************************************
 * Program: 	company sales figures structure
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
struct sales
{
  int  year,sf;//sf=sales figure for each month
  char month[14];
};
void main()
{
  int i;
  printf("YEAR MONTH SALES\n");
  struct sales s[3];
  for(i=0;i<3;i++)
  {
    scanf("%d",&s[i].year);
    scanf("%s %d",&s[i].month,&s[i].sf);
    printf("%d %s   %d\n",s[i].year,s[i].month,s[i].sf);
  }
} 