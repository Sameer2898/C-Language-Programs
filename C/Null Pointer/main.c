#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    // int *ptr = &num; // For initialized a value
    int *ptr = NULL; // For null pointer
    
    printf("Enter a integer value:- ");
    scanf("%d", &num);

    if (ptr != NULL)
    {
        printf("The value stored at the integer value:- %d", *ptr);
        printf("\nThe address of the integer value is %d.", ptr);
    }
    else
    {
       printf("Please check the pointer before dereferenced it because it is initiliazed as null.");
    }
    
    return 0;
}
