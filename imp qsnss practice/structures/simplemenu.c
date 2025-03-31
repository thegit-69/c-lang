#include <stdio.h>

void option1() {
    printf("You selected Option 1\n");
}

void option2() {
    printf("You selected Option 2\n");
}

void option3() {
    printf("You selected Option 3\n");
}

int main() {
    int choice;

    do {
        // Display menu
        printf("\n===== MENU =====\n");
        printf("1. Option 1\n");
        printf("2. Option 2\n");
        printf("3. Option 3\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        
        // Get user input
        scanf("%d", &choice);

        // Process choice
        switch (choice) {
            case 1:
                option1();
                break;
            case 2:
                option2();
                break;
            case 3:
                option3();
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}