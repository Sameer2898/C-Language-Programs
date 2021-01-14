#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, count = 0;
    while (1)
    {
        printf("Welcome To Guess A Number Game.\n");
        while (1)
        {
            printf("Enter a number:- ");
            scanf("%d", &num);
            count += 1;
            if (num == 5)
            {
                goto end;
            }
        }      
    }
    end:
    printf("You guess the number in %d times.", count);
    return 0;
}
