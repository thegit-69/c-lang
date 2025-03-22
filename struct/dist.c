/**************************************
 * Program: 	Dist
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
#include<math.h>
struct origin
{
  float x,y,dist;
};
void main()
{
  int i;
  printf("dist\n");
  struct origin o[3];
  for(i=0;i<3;i++)
  {
  scanf("%f %f",&o[i].x,&o[i].y);
  o[i].dist=(o[i].x*o[i].x)+(o[i].y*o[i].y);
  printf("%.2f\n",sqrt(o[i].dist));
  }