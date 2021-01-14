#include <stdio.h>

void reverse_array(int arr[])
{
    int temp;
    for (int i = 0; i < 5/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[4-i];
        arr[4-i] = temp;
    }
}

void print_array(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("The element at %d is %d.\n", i, arr[i]);
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5};
    printf("The array element before reversing the array.\n");
    print_array(arr);
    reverse_array(arr);
    printf("The array element after reversing the array.\n");
    print_array(arr);
    return 0;
}