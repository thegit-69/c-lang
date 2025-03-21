//counting no of vowels
#include<stdio.h>
#include<string.h>
void main()
{
	char x[10]="surendra";
	int i,count=0,length,y;
	y=strlen(x);
	for(i=0;i<y;i++)
	{
		if(x[i]=='a' || x[i]=='e' || x[i]=='i'|| x[i]=='o' || x[i]=='u')
		count++;
	}
	printf("Number of vowels = %d",count);
}