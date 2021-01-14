#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int user;
    int *ptr;
    printf("Enter the size of the array you want to create:- ");
    scanf("%d", &user);

    // Use of malloc
    // ptr = (int *)malloc(user * sizeof(int));
    // for (int i = 0; i < user; i++)
    // {
    //     printf("Enter the %d elements:- ", i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i = 0; i < user; i++)
    // {
    //     printf("The value of %d is %d.\n", i, ptr[i]);
    // }
    // free(ptr);

    // Use of calloc
    ptr = (int *)calloc(user, sizeof(int));
    for (int i = 0; i < user; i++)
    {
        printf("Enter the %d elements:- ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < user; i++)
    {
        printf("The value of %d is %d.\n", i, ptr[i]);
    }
    free(ptr);

    // Use of realloc
    printf("Enter the new size of the array:- ");
    scanf("%d", &user);
    ptr = (int *)realloc(ptr, user * sizeof(int));
    for (int i = 0; i < user; i++)
    {
        printf("Enter the %d elements:- ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < user; i++)
    {
        printf("The new value of %d is %d.\n", i, ptr[i]);
    }
    free(ptr);

    return 0;
}
