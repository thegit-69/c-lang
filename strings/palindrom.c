//palindrome or not
#include<stdio.h>
#include<string.h>
void main()
{
	char s1[15];
	char s2[15];
	gets(s1);
	strcpy(s2,s1);
	strrev(s1);
	int output;
	output=strcmp(s2,s1);
	if(output==0)
	{
		printf("palindrome");
	}
	else
	{
		printf("not a palindrome");
	}
}