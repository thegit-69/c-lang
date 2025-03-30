//multiple of a nos or tables
#include<stdio.h>
int main()
{
	int i,n,tables=1;
	printf("Enter n = ");
	scanf("%d",&n);
	printf("Tables of %d upto 10 multiples\n",n);
	for(i=1;i<=10;i++)
	{
		tables=n*i;
		printf("%d x %d = %d\n",n,i,tables);
	}
	return 0;
}