/**************************************
 * Program: 	strings basics
 * By Author: 	DASARATH.C
 **************************************/
 
//strings basics
//these below comaands works iff #include<string.h> is present in the program
//string length : strlen(address of str) 
//string reverse : strrev(address of str)
//string copy : strcpy(destination,source)
//string compare: strcmp(destination,source) if 0 same ; if 1 r -1 different
//concatenation= combining 2 strings e.g x=hi hello 2 diff words after concainating
//x=hihello in c : strcat(destination,source)
//each char in string compare: strncmp(destination,source,x); x=till which char if 0 same ; if 1 r -1 different
//to find the postion(arr index) of a char in string use strchr(source,'char')-source;
//sub sting : strstr(stringvar,"the words")-s1;
//learn abt strncmp
//to get sring as input use gets(string)
//remeber u can use scanf for getting other inputs but it will work above the gets 
//below i.e if 13 line=gets then give scanf in <13(12,11,10,9,8...1) but not in 14 15...
#include<stdio.h>
#include<string.h>
void main()
{
	char s1[6]="you";
	char s2[5]="fuck";
	printf("%s ",strcat(s2,s1));
}