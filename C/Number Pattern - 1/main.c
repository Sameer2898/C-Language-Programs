#include <stdio.h>

void pattern(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (j >= i)
            {
                printf("%d", i);
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
