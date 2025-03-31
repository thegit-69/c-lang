//prac simple menu
#include<stdio.h>
void opt1()
{
    printf("నువ్వు ఎర్రిపూకు రా\n");
}
void opt2()
{
    printf("మంచివోడు రా\n");
}
void opt3()
{
    printf("నువ్వు  మనిషి  ఆ  మడేలా\n");
}
int main()
{
    int choice;
    do
    {
        printf("\n**======BS MENU======**\n");
        printf("1. option 1\n");
        printf("2. option 2\n");
        printf("3. option 3\n");
        printf("4. EXIT\n");
        printf("Enter choice = \n");
        scanf("%d",&choice);

       switch(choice)
       {
        case 1 : opt1();break;
        case 2 : opt2();break;
        case 3 : opt3();break;
        case 4 : printf("Exiting program...");break;
        default : printf("Enter a valid number from 1 to 4");
       }
    } while (choice!=4);
    return 0;   
}