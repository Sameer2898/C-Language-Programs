#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Guess the number and come out from the loop.\n");
    int num, index = 1;
    while (1)
    {
        printf("Enter a number:- ");
        scanf("%d", &num);
        if (num == 15)  
        {
            break;
        }
        index += 1;
    }   
    printf("Yeah you came out from the loop.");
    return 0;
}
