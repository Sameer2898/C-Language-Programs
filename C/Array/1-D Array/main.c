#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[4];
    // int arr[4] = {1,2,3,4}; Declaration with initialization.
    printf("Let's play with array:-\n");
    printf("Store the elements in the array:-\n");
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the %d element of the array:- ", i);
        scanf("%d", &arr[i]);
    }
    printf("Print the elements of the array:-\n");
    for (int i = 0; i < 4; i++)
    {
        printf("The element at %d is %d.\n", i, arr[i]);
    }
    return 0;
}
