//rev a no
#include<stdio.h>
int main()
{
	int n,rev=0,r;
	printf("Enter n = ");
	scanf("%d",&n);
	int ognum=n;
	while(n>0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	}
	printf("%d is reverse of %d number",rev,ognum);
	return 0;
}