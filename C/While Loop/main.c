#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, index = 1;
    printf("Enter a number:- ");
    scanf("%d", &num);
    printf("The table of %d is:-\n", num);
    while (index <= 10)
    {
        printf("%d X %d = %d\n", num, index, num*index);
        index += 1;
    }   
    return 0;
}
