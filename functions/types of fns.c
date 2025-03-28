//fns 
//t-4 with argument and with return value
#include<stdio.h>
int add(int a,int b)
{
	return(a+b);
}
void main()
{
	printf("%d",add(8,9));
}

/*/t-3 with argument and without return value
#include<stdio.h>
void add(int a,int b)
{
	printf("%d",a+b);
}
void main()
{
	add(2,5);
}/*/



















/*/t-2 without argument with return value
#include<stdio.h>
int add()
{
	int a,b;
	scanf("%d %d",&a,&b);
	return(a+b);
}
void main()
{
	printf("%d",add());
}/*/

/*/t-1 without argument without return value
#include<stdio.h>
void add()
{
	int a=3,b=5;
	printf("%d",a+b);
}
void main()
{
	add();
}/*/