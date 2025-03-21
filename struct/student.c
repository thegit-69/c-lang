/**************************************
 * Program: 	basic structure qsn(only 1 input)
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
struct student
{
	int regno,m1,m2,sum;
	char name[25];
	float avg;
};
void main()
{
	struct student s1;
	scanf("%s",&s1.name);
	scanf("%d %d %d",&s1.regno,&s1.m1,&s1.m2);
	s1.sum=s1.m1+s1.m2;
	s1.avg=(float)s1.sum/2;
	printf("%s\n",s1.name);
	printf("%d\n%d \n%.2f",s1.regno,s1.sum,s1.avg);
}