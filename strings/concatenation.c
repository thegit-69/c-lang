//concatenation= combining 2 strings e.g x=hi hello 2 diff words after concainating x=hihello
#include<stdio.h>
void main()
{
	char s1[10]="hi";
	char s2[10]="hello";
	int i,j=5;//here j=length of s2(hello) 
	for(i=0;i<2;i++)//here i<2 bcz lenght of s1=2
	{
		s2[j]=s1[i];
		j++;
	}
	printf("%s",s2);
}