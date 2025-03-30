/**************************************
 * Program: 	Harshad number
 * By Author: 	DASARATH.C
 **************************************/
 /*/Harshad number or niven number:
 a number which is divisible by its sum of its digits
 e.g:12 --> 12%(1+2) = 12%3 == 0
 18 --> 18%(1+8) = 18%9 ==0/*/
 #include<stdio.h>
 int main()
 {
 	int n,i,sum=0,r;
 	printf("Enter n = ");
	scanf("%d",&n);
	int ognum=n;
 	while(n>0)
 	{
 		r=n%10;
		n=n/10;
		sum=sum+r;	
	}
	if(ognum%sum==0)
	{
		printf("%d is HARSHAD NUMBER",ognum);
	}
	else
	{
		printf("%d is NOT a HARSHAD NUMBER",ognum);
	}
	return 0;
 }