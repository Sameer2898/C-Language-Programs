#include <stdio.h>

int addition(int num1, int num2)
{
    return num1 + num2;
}

int subtraction(int num1, int num2)
{
    return num1 - num2;
}

int multipication(int num1, int num2)
{
    return num1 * num2;
}

int division(int num1, int num2)
{
    return num1 / num2;
}

int modulo(int num1, int num2)
{
    return num1 % num2;
}

int main(int argc, char const *argv[])
{
    int num1, num2, choice, a, b, c, d, e;
    printf("Enter the first number:- ");
    scanf("%d", &num1);
    printf("Enter the second number:- ");
    scanf("%d", &num2);
    printf("1. Press 1 for addition.\n2. Press 2 for subtraction.\n3. Press 3 for multipication.\n4. Press 4 for division.\n5. Press 5 for modulotion.\n");
    printf("Enter choice here:- ")/
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        a = addition(num1, num2);
        printf("The addition of %d and %d is %d.", num1, num2, a);
        break;

    case 2:
        b = subtraction(num1, num2);
        printf("The subtraction of %d and %d is %d.", num1, num2, b);
        break;

    case 3:
        c = multipication(num1, num2);
        printf("The multipication of %d and %d is %d.", num1, num2, c);
        break;

    case 4:
        d = division(num1, num2);
        printf("The division of %d and %d is %d.", num1, num2, d);
        break;

    case 5:
        e = modulo(num1, num2);
        printf("The modulation of %d and %d is %d.", num1, num2, e);
        break;
    
    default:
        printf("Enter the valid input.");
    }
    return 0;
}
