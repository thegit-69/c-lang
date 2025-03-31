#include<stdio.h>
struct student
{
    char name[20],dept[10];
    int regno,year;
};
int main()
{
    struct student s[2];
    int i;
    printf("Enter name,department,regno,year\n");
    for(i=0;i<2;i++)
    {
        scanf("%s",&s[i].name);
        scanf("%s",&s[i].dept);
        scanf("%d",&s[i].regno);
        scanf("%d",&s[i].year);
    }
    printf("name\tDEPARTMENT REGISTRATION_NO\tYEAR\n");
    for(i=0;i<2;i++)
    {
        printf("%s\t%s\t    %d\t    %d\n",s[i].name,s[i].dept,s[i].regno,s[i].year);
    }
    return 0;
}