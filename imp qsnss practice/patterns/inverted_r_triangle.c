#include<stdio.h>
int main()
{
    int i,j,star=3;
    for(i=1;i<=3;i++)
    {
        for(j=star;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
        star--;
    }
    return 0;
}