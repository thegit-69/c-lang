/**************************************
 * Program: 	Weather struct
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
struct weather
{
  float temp,humid,ws;//ws=wind speed
};
void main()
{
  int i;
  struct weather s[3];
  for(i=0;i<3;i++)
  {
    scanf("%f %f %f",&s[i].temp,&s[i].humid,&s[i].ws);
    printf("%.2f celcius %.2f % ",s[i].temp,s[i].humid);
    printf("%.2f km/h \n",s[i].ws);
  }
}
 