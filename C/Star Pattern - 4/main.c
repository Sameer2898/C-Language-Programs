#include <stdio.h>

void pattern(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < 2 * num; j++)
        {
            if (j >= num - 1 - i && j <= num - 1 + i )
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
    int num;
    printf("How many times you want to print pattern:- ");
    scanf("%d", &num);
    pattern(num);
    return 0;
}
