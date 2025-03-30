/**************************************
 * Program: 	Strong number
 * By Author: 	DASARATH.C
 **************************************/
 /*/strong number =  sum of factorial of each digit of the input num == the number
 e.g: 145=1!+4!+5!/*/
#include<stdio.h>
int factorial(int n)
{
	int fact=1,i;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return (fact);
}
int main()
{
	int n,r,sum=0,x;
	printf("Enter n = ");
	scanf("%d",&n);
	int ognum=n;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		sum=sum+factorial(r);
	}
	if(sum==ognum)
	{
		printf("%d is a STRONG NUMBER",ognum);
	}
	else
	{
		printf("%d is NOT a STRONG NUMBER",ognum);
	}
	return 0;
}