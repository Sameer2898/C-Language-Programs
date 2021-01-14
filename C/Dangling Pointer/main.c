#include <stdio.h>
#include <stdlib.h>

int* pointer_function()
{
    int a, b, sum;
    a = 10;
    b = 5;
    sum = a + b;
    return &sum;
}
int main(int argc, char const *argv[])
{
    // Case 1:- Dealloaction of memory block.
    int *ptr = (int *) malloc(4 * sizeof(int));
    ptr[0] = 1;
    ptr[1] = 2;
    for (int i = 0; i < 2; i++)
    {
        printf("Value of ptr at %d is %d.\n", i, *ptr);
        ptr++;
        free(ptr);
    }
    free(ptr);

    // Case 2:- Function return local variable address
    // int *ptr = pointer_function();

    // Case 3:- If a variable goes out of scope
    // int *ptr;
    // {
    //     int a = 10;
    //     ptr = &a;
    // }
    return 0;
}