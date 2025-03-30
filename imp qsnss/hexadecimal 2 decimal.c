/**************************************
 * Program: 	hexa decimal 2 decimal
 * By Author: 	DASARATH.C
 **************************************/
 /*/format specifers
 "%d"=decimal
 "%o"=octal
 "%x"=hexa decimal
 just binary only we neeed to learn properly other than that every converesion is very EASY/*/
 #include<stdio.h>
 int main()
 {
 	int n;
 	printf("Enter hex number = ");
	scanf("%x",&n);
	printf("decimal = %d",n);
	return 0;
 }