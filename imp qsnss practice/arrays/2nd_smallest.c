/**************************************
 * Program: 	2nd minima or 2nd smallest
 * By Author: 	DASARATH.C
 **************************************/
 #include<stdio.h>
 int main()
 {
    int i,a[5]={1,2,3,4,5};
    int temp,j;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
             }
        }
    }
    printf("Asc order:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("2nd smallest or 2nd minima = %d",a[1]);
 }