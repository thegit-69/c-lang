/**************************************
 * Program: 	AUTOMORphic number
 * By Author: 	DASARATH.C
 **************************************/
 /*/AUTOMORPHIC NUMBER: a natural number whose sq. also ends with the same ending digit as natural no.
 e.g: 5^2=25 here 5 in lhs and ending no of sq. values is also 5,
 6^2=36 ending no of 6 & 36 is 6 ,
 25^2=625 ending no of 25 & 625 is 5./*/
 #include<stdio.h>
 #include<math.h>
 int main()
 {
 	int n,r,x,rx,rn;//rn= 1st remaider(last digit of n) , rx= 1st remaider(last digit of sq.)
 	printf("Enter n = ");
	scanf("%d",&n);
	x=pow(n,2);
	rx=x%10;
	rn=n%10;
	//for understanding this problem once print this line then put //
	printf("n=%d\npower=%d\nrx=%d\nrn=%d\n",n,x,rx,rn);
	if(rx==rn)
	{
		printf("%d is a AUTOMORPHIC NUMBER",n);
	}
	else
	{
		printf("%d is NOT an AUTOMORPHIC NUMBER",n);
	}
 	return 0;
 }