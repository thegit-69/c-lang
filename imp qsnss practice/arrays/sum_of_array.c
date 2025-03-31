/**************************************
 * Program: 	sum of array ELEMENTS
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter size of array = ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array = \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("sum of elements of array = %d",sum);
    return 0;
}