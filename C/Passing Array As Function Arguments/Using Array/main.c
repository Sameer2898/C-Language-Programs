#include <stdio.h>

int print_array(int array[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("The value at %d is %d.\n", i, array[i]);
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5};
    print_array(arr);
    return 0;
}