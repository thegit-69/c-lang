//simple menu
#include<stdio.h>
void opt1()
{
    printf("i choose 1st option\n");
}
void opt2()
{
    printf("i choose 2nd option\n");
}
void opt3()
{
    printf("i chose 3rd option\n");
}
int main()
{
    int choice;
    do
    {
        printf("*======KOTHA MENU======*\n");
        printf("1. option 1\n");
        printf("2. option 2\n");
        printf("3. option 3\n");
        printf("4. EXIT\n");
        printf("Please enter your choice :\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case(1) : opt1();break;
            case(2) : opt2();break;
            case(3) : opt3();break;
            case(4) : printf("Exiting the program");break;
            default : printf("Enter a number between 1 to 4");
        }

    }while(choice!=4);

    return 0;
}