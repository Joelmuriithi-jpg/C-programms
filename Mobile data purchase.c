#include <stdio.h>

int main(void) {
    int choice;

    printf("Mobile Data Bundles\n");
    printf("1. 100 MB - KES 50\n");
    printf("2. 500 MB - KES 200\n");
    printf("3. 1 GB   - KES 350\n");
    printf("4. 2 GB   - KES 600\n");
    printf("Enter your choice (1-4): ");

    if (scanf("%d", &choice) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    switch (choice) {
    case 1:
    printf("Selected: 100 MB bundle - KES 50\n");
    break;
    case 2:
    printf("Selected: 500 MB bundle - KES 200\n");
    break;
    case 3:
    printf("Selected: 1 GB bundle - KES 350\n");
    break;
    case 4:
    printf("Selected: 2 GB bundle - KES 600\n");
    break;
    default:
    printf("Invalid choice. Please select an option from 1 to 4.\n");
    }

    return 0;