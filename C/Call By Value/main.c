#include <stdio.h>

int call_by_value(int num1, int num2)
{
    return num1 + num2;
}

int main(int argc, char const *argv[])
{
    int num1, num2, sum;
    printf("Enter the first number:- ");
    scanf("%d", &num1);
    printf("Enter the second number:- ");
    scanf("%d", &num2);
    sum = call_by_value(num1, num2);
    printf("The addition of two numbers are:- %d", sum);
    return 0;
}