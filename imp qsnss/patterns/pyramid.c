#include<stdio.h>
int main()
{
    int i,j,sp=2,s,star=1;
    for(i=1;i<=3;i++)
    {
        for(s=sp;s>=1;s--)
        {
            printf(" ");
        }
        sp--;
        for(j=1;j<=star;j++)
        {
            printf("*");
        }
        printf("\n");
        star=star+2;
    }
    return 0;
}