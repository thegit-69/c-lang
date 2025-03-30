/**************************************
 * Program: 	magic number  
 * By Author: 	DASARATH.C
 **************************************/
/*/ magic number = n : 
let sum of digits of n = x 
and y=sum of digits of x;
if y=1 ==> n is a magic number e.g: 1234,5230
for n=1234 x=1+2+3+4=10 y=1+0=1 .
Therefore n=1234 is a magical sum./*/
#include<stdio.h>
int main()
{
	int n,x=0,y=0,r;//here x= n sum of digits && y= x sum of digits
	printf("Enter n = ");
	scanf("%d",&n);
	int ognum=n;
	while(n>0)
	{
		r=n%10;
		x=x+r;
		n=n/10;
	}
	while(x>0)
	{
		r=x%10;
		y=y+r;
		x=x/10;
	}
	if(y==1)
	{
		printf("%d is a MAGIC NUMBER",ognum);
	}
	else
	{
		printf("%d is a NOT A MAGIC NUMBER",ognum);
	}
	return 0;
}