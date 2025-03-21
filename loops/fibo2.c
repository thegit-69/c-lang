#include<stdio.h>
void main()
{
	int i,n,f=0,s=1,sum;
	printf("Enter number of series =");
	scanf("%d",&n);
	printf("%d %d",f,s);
	for(i=1;i<=n;i++)
	{
		sum=f+s;
		printf(" %d",sum);
		f=s;
		s=sum;
	}
}