#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Integer number
    int integer_number = 5;
    int *integer_address = &integer_number;

    // Floating point number
    float floating_number = 5.0;
    float *floating_address = &floating_number;

    // Character
    char character = 's';
    char *character_address = &character;

    // Integer numbers
    printf("The number is %d.\n", integer_number);
    printf("The address of number is %x.\n", &integer_number);
    printf("The address of pointer to %d is %x\n", integer_number, &integer_address);

    // Floating point numbers
    printf("\nThe number is %f.\n", floating_number);
    printf("The address of number is %x.\n", &floating_number);
    printf("The address of pointer to %d is %x\n", floating_number, &floating_address);

    // Character 
    printf("\nThe number is %c.\n", character);
    printf("The address of number is %x.\n", &character);
    printf("The address of pointer to %c is %x\n", character, &character_address);
    return 0;
}
