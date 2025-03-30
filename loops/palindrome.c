//palindrome
#include<stdio.h>
void main()
{
	int i,n=121,r,rev=0;//change input here n=
	int ognum=n;
	while(n>0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	}
	if(ognum==rev)
	{
		printf("%d is a palindrome",rev);
	}
	else
	{
		printf("%d is NOT a palindrome",rev);
	}
}