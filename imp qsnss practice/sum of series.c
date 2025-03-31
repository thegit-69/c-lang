//series sum=1+1/2+1/3+1/4+....=??
#include<stdio.h>
int main()
{
	int i,n;
	float sum=0;
	printf("Enter n = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(1/(float)i);
	}
	printf("%f",sum);	
	return 0;
}