/**************************************
 * Program: 	person struct
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
struct person	
{
  int phone;
  char name[12],email[30];
};
void main()
{
  int i;
  printf("NAME\tPHONE_NUM\tEMAIL_ADDRESS\n");
  struct person s[3];
  for(i=0;i<3;i++)
  {
    scanf("%s %d %s",&s[i].name,&s[i].phone,&s[i].email);
    printf("%s\t%d\t%s\n",s[i].name,s[i].phone,s[i].email);
  }
} 