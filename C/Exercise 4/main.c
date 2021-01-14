#include <stdio.h>

void star_pattern(int num)
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

void reverse_star_pattern(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (i + j <= (num - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int num, choice;
    printf("Press 1 for the star pattern.\nPress 2 for reverse star pattern.");
    printf("\nEnter your choice here:- ");
    scanf("%d", &choice);
    printf("How many times you want to print the pattern:- ");
    scanf("%d", &num);
    if (choice == 1)
    {
        star_pattern(num);
    }
    else if (choice == 2)
    {
        reverse_star_pattern(num);
    }

    return 0;
}
