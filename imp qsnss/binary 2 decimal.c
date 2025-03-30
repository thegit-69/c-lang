/**************************************
 * Program: 	binary to decimal conversion
 * By Author: 	DASARATH.C
 **************************************/
 #include<stdio.h>
 #include<math.h>
 int main()
 {
 	int r,n,i=0,deci=0;
 	printf("Enter n = ");
 	scanf("%d",&n);
 	while(n>0)
	{
		r=n%10;
		deci=deci+(r*pow(2,i));
		n=n/10;
		i++;
	}
	printf("%d",deci);
 	return 0;
 }