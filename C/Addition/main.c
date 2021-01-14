#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Program of addition.\n");
    printf("Enter the first number:-");
    scanf("%d", &a);
    printf("Enter the second number:-");
    scanf("%d", &b);
    printf("The addition of %d and %d is:- %d", a, b, a+b);
    return 0;
}
