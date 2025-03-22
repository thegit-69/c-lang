/**************************************
 * Program: 	Age classsification
 * By Author: 	DASARATH.C
 **************************************/


//age
//prac-1
/*/
child(0-12)
teen(13-19)
adult(20-65)
sr.(>=65)/*/
#include<stdio.h>
void main()
{
  int age;
  scanf("%d",&age);
  if(age>0 & age<=12)
  {
    printf("you are a child");
  }
  else if(age>=13 & age<=19)
  {
    printf("teenager");
  }
  else if(age>19 & age<65)
  {
    printf("adult");
  }
  else if(age>=65)
  {
    printf("senior citizen");
  }
}