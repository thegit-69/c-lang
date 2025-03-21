/**************************************
 * Program: 	grade
 * By Author: 	DASARATH.C
 **************************************/
// A=10 B=9 C=8 D=7 F=0
#include<stdio.h>
void main()
{
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 10 :printf("A grade");break;
		case 9  :printf("B grade");break;
		case 8  :printf("C grade");break;
		case 7  :printf("D grade");break;
		default :printf("F grade");
	}
}
