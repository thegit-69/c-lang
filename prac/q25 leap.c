#include<stdio.h>
void main()
{
	int y=2001;
	 if (y%400==0)
	 {
	 	printf("leap year");
	 }
	 else if(y%4==0 & y%100!=0)
	 {
	 	printf("leap");
	 }
	 else
	 {
	 	printf("not leap");
	 }
}