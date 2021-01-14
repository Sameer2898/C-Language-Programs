#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i <= length; i++)
    {
        printf("The address of %d is %d.\n",i, &arr[i]);
        printf("The element at %d index is %d.\n", i, arr[i]);
    }
    
    return 0;
}
