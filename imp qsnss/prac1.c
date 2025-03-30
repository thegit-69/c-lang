//decimal to binary conversion
#include<stdio.h>
int main()
{
	int r,n,i=1,bin=0;
	printf("Enter n = ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%2;//rember d 2 b conversion divede by 2 and mul by 10
		n=n/2;
		bin=bin+(r*i);
		i=i*10;
	}
	printf("Binary value = %d",bin);
}