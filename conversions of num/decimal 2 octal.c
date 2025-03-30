/**************************************
 * Program: 	decimal 2 octal
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
 	printf("Enter decimal number = ");
	scanf("%d",&n);
	printf("OCTAL = %o",n);
	return 0;
 }