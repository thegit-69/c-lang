//smallest digit of 2
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a = ");
	scanf("%d",&a);
	printf("Enter b = ");
	scanf("%d",&b);
	if(a>b)
	{
		printf("%d is greater that %d",a,b);
	}
	else
	{
		printf("%d is greater that %d",b,a);
	}
	return 0;
}