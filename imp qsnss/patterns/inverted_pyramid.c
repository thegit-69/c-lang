/**************************************
 * Program: 	inverted pyramid
 * By Author: 	DASARATH.C
 **************************************/
 #include<stdio.h>
 int main()
 {
    int i,j,star=5,sp=1,s;
    for(i=1;i<=3;i++)
    {
        for(s=1;s<=sp;s++)
        {
            printf(" ");
        }
        sp++;
        for(j=star;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
        star=star-2;
    }
    return 0;
 }