/**************************************
 * Program: 	Customer structure
 * By Author: 	DASARATH.C
 **************************************/
include<stdio.h>
struct bank
{
  char tt[10];
  int amount,date;
};
void main()
{
  int i;
  printf("TRANSACTION HISTORY\n");
  printf("DATE\tTRANSACTION TYPE\tAMOUNT\n");
  struct bank s[3];
  for(i=0;i<3;i++)
  {
    scanf("%d %s %d",&s[i].date,&s[i].tt,&s[i].amount);
    printf("%d\t %s\t\t\t%d\n",s[i].date,s[i].tt,s[i].amount);
  }
} 