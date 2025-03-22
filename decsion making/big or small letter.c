/**************************************
 * Program: 	big letter or small ltr
 * By Author: 	DASARATH.C
 **************************************/
//prac -01
#include<stdio.h>
void main()
{
  char ltr;
  scanf("%c",&ltr);
  if(ltr>=97 && ltr<=122)
  {
  	printf("%c is lower case letter",ltr);
  }
  else if(ltr>=65 && ltr<=90)
  {
    printf("%c is upper case letter",ltr);
  }
}