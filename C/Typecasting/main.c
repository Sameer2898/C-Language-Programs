#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    float b;
    char c;
    printf("Enter a integer number:- ");
    scanf("%d", &a);
    printf("The value of integer number is:- %d\n", a);

    printf("\nEnter a float number:- ");
    scanf("%f", &b);
    printf("The value of float number is:- %d\n", (int) b);

    printf("\nEnter a character:- ");
    scanf(" %c", &c);;
    printf("The value of character is:- %d", (int) c);

    return 0; 
}
