/**************************************
 * Program: 	reverse without #include<string.h>
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void main()
{
	char s1[3]="hey";
	char s2[3];
	int i,j=2;
	for(i=0;i<3;i++)
	{
		s2[j]=s1[i];
		j--;
	}
	for(i=0;i<3;i++)
	{
	printf("%c",s2[i]);
	}
}