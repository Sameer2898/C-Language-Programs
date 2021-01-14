#include <stdio.h>

int call_by_reference(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    return 0;
}

int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Enter the first number:- ");
    scanf("%d", &num1);
    printf("Enter the second number:- ");
    scanf("%d", &num2);
    printf("The value of first number is %d and the value of second number is %d before swaping.\n", num1, num2);
    call_by_reference(&num1, &num2);
    printf("The value of first number is %d and the value of second number is %d after swaping.", num1, num2);   
    return 0;
}