/**************************************
 * Program: 	merging_of_array
 * By Author: 	DASARATH.C
 **************************************/
 #include<stdio.h>
 int main()
 {
    int i,a[3]={1,2,3};
    int b[2]={4,5};
    int c[5],j=3;
    for(i=0;i<3;i++)
    {
        c[i]=a[i];
        c[j]=b[i];
        j++;
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",c[i]);
    }
    return 0;
 }
 