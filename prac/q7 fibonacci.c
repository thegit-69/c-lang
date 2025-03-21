#include<stdio.h>
void main()
{
	int i,n=6,f=0,s=1,out;
	printf("%d %d ",f,s);
	for(i=1;i<=n;i++)
	{
		out=f+s;
		printf("%d ",out);
		f=s;
		s=out;
	}
}