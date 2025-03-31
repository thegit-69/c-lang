/**************************************
 * Program: 	n students structure program
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
	int i;
	struct student s[2];//here in the place of 2 you can take any number
	for(i=0;i<2;i++)//here if you change s[2] in the above line into s[100] then i<100
	{
	scanf("%s",&s[i].name);
	scanf("%d %d %d",&s[i].regno,&s[i].m1,&s[i].m2);
	s[i].sum=s[i].m1+s[i].m2;
	s[i].avg=(float)s[i].sum/2;
	}
	printf("name\tregno\t	sum\tavg\n");
	for(i=0;i<2;i++)
	{
	printf("%s\t",s[i].name);
	printf("%d\t%d\t %.2f\n",s[i].regno,s[i].sum,s[i].avg);
	printf("\n");
	}
}