#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("The total aguments of argc is %d.\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("The argument at index %d is the value %s.\n", i, argv[i]);
    }
    return 0;
}