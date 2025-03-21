#include<stdio.h>
void main()
{
	int r,n,rev=0;
	scanf("%d",&n);
	int ognum=n;
	while(n>0)
	{
	 r=n%10;
	 n=n/10;
 	 rev=(rev*10)+r;
	}
	if(ognum==rev)
	{
		printf("palindrome");
	}
	else
	{
		printf("not a palindrome");
	}
}