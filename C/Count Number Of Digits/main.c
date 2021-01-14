#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, count = 0;
    printf("Enter a number:- ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("There are 1 digit in the number.");
    }
    else
    {
        while (num != 0)
        {
            num = num / 10;
            count++;
        }
        printf("There are %d digits in the number", count);
    }
    return 0;
}