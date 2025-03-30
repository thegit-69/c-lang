/**************************************
 * Program: 	FIBONACCI
 * By Author: 	DASARATH.C
 **************************************/
 #include<stdio.h>
 int main()
 {
 	int f=0,s=1,i,n,temp,output;
 	printf("Enter n = ");
	scanf("%d",&n);
	printf("%d ",f);
	for(i=1;i<=n;i++)
	{
		output=output+s;
		temp=output;
		output=s;
		s=temp;
		printf("%d ",output);
	}
 	return 0;
 }