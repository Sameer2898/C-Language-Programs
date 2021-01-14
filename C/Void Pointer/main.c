#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num_1;
    float num_2;
    void *ptr;

    ptr = &num_1;
    printf("Enter a integer value:- ");
    scanf("%d", &num_1);
    printf("The integer value is:- %d", *((int *)ptr));
    printf("\nThe address of integer value is:- %d", ((int *)ptr));
    printf("\nEnter a floating point value:- ");
    scanf("%d", &num_2);
    printf("The floating point value is:- %d", *((float *)ptr));
    printf("\nThe address of floating point value is:- %d", ((int *)ptr));

    return 0;
}
