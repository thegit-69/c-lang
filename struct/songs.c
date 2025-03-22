/**************************************
 * Program: 	songs
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
struct song
{
  char title[15],artist[15],album[15];
  float length;
};
void main()
{
  int i;
  struct song s[3];
  printf("song\taritst\talbum\tlength\n");
  for(i=0;i<3;i++)
  {
  scanf("%s %s %s",s[i].title,s[i].artist,s[i].album);
  scanf("%f",&s[i].length);
  printf("%s\t%s\t%s\t",s[i].title,s[i].artist,s[i].album);
  printf("%.2f\n",s[i].length);
  }
} 