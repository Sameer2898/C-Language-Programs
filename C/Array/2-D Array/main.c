#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[3][3];
    printf("Print numbers between 1 to 10.");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the numbers between (1-10):- ");
            scanf("%d", arr[i][j]);
        }
        printf("\n");
    }

    printf("Array in matrices form:- ");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The element at %d, %d is:- ", i, j, arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
