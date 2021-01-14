#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2;
    int choice;
    printf("Enter 1 for addition.\n");
    printf("Enter 1 for subtraction.\n");
    printf("Enter 1 for multipication.\n");
    printf("Enter 1 for division.\n");
    printf("Enter your choice:- ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter first number:- ");
        scanf("%d", &num1);
        printf("Enter second number:- ");
        scanf("%d", &num2);
        printf("Addition of %d and %d is:-%d", num1, num2, num1+num2);
        break;
    
    case 2:
        printf("Enter first number:- ");
        scanf("%d", &num1);
        printf("Enter second number:- ");
        scanf("%d", &num2);
        printf("Subtraction of %d and %d is:-%d", num1, num2, num1-num2);
        break;

    case 3:
        printf("Enter first number:- ");
        scanf("%d", &num1);
        printf("Enter second number:- ");
        scanf("%d", &num2);
        printf("Multipication of %d and %d is:-%d", num1, num2, num1*num2);
        break;

    case 4:
        printf("Enter first number:- ");
        scanf("%d", &num1);
        printf("Enter second number:- ");
        scanf("%d", &num2);
        printf("Division of %d and %d is:-%d", num1, num2, num1/num2);
        break;
    default:
        printf("Enter a valid choice.");
        break;
    }
    return 0;
}
