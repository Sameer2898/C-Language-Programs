#include <stdio.h>

int returnMax(int array[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        
    }
    array[0] = 999;
    return max;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 12, 3, 54, 67, 654};
    int max = returnMax(arr, 6);
    printf("The maximum element in the array is %d.\n", max);
    for (int i = 0; i < 6; i++)
    {
        printf("The element %d is %d.\n", i, arr[i]);
    }
    
    return 0;
}
