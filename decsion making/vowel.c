#include<stdio.h>
void main()
{
	char a,e,i,o,u,n;
	printf("Enter a single letter = ");
	scanf("%c",&n);
	if (n=='a' | n=='e' | n=='i' | n=='o' |n=='u')
	{
		printf("%c charecter is vowel",n);
	}
	else 
	{
		printf("%c is a consnant",n);
	}
}
