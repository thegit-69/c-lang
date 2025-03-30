/**************************************
 * Program: 	decimal 2 hexa decimal 
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
 	printf("Enter DECIMAL number = ");
	scanf("%d",&n);
	printf("HEX-decimal = %x",n);
	return 0;
 }