/**************************************
 * Program: 	count no of vowels in a string using fn and pointer
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
void vowel(char *v)
{
	char a,e,i,o,u;
	int j,count=0;	
	for(j=0;j<6;j++)
	{
	if(v[j]=='a'|| v[j]=='e'||v[j]=='i'||v[j]=='o'||v[j]=='u')
	{
		count++;
	}
	}
	printf("Number of vowels = %d",count);
}
int main()
{
	char s[6]="shiva";
	vowel(s);
	return 0;
}