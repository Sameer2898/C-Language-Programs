#include <stdio.h>

int pattern(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }   
}

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter how many times you want to print the pattern:- ");
    scanf("%d", &num);
    pattern(num);
    return 0;
}
