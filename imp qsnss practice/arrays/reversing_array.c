/**************************************
 * Program: 	reversing an array
 * By Author: 	DASARATH.C
 **************************************/
#include<stdio.h>
int main()
{
    int i,j=4,a[5]={1,2,3,4,5};
    int b[5];
    for(i=0;i<5;i++)
    {
        b[i]=a[j];
        j--;
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",b[i]);
    } 
    return 0;
}