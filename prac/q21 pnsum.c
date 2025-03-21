#include<stdio.h>
void main()
{
	int i,n=5,psum=0,nsum=0;
	int a;
	for(i=1;i<=n;i++)
	{ 
		scanf("%d",&a);
		if(a>0)
		{
		psum=psum+a;
		}
		else
		{
		nsum=nsum+a;
		}	
	}
	printf("\npsum = %d  nsum = %d",psum,nsum);
}