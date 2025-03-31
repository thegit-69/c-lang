/**************************************
 * Program: 	maximum_of_array
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter size of array = ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of array = \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("max element = %d",max);
    return 0;
}