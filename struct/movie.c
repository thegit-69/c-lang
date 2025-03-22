/**************************************
 * Program: 	movie
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
struct movie
{
	char m[15],d[15],act[20];
  	int rd;
};
void main()
{
  int i;
  printf("MOVIE\tDIRECTOR  ACTORS\tRELEASE\n");
  struct movie s[3];
  for(i=0;i<3;i++)
  {
    scanf("%s %s %s %d",s[i].m,s[i].d,s[i].act,&s[i].rd);
    printf("%s\t%s\t  %s\t%d\n",s[i].m,s[i].d,s[i].act,s[i].rd);
  }
} 