#include<stdio.h>
int main()
{
    int i,j,s,sp=2,star=1;
    for(i=1;i<=3;i++)
    {
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
    }
    int i1,j1,s1,sp1=2,star1=5;
    for(i1=1;i1<=3;i1++)
    {
        for(s1=1;s1>=sp1;s1--)
        {
            printf(" ");
        }
        sp1--;
        for(j1=1;j1<=star1;j1++)
        {
            printf("*");
        }
        printf("\n");
        star1=star1-2;
    }
    return 0;
}