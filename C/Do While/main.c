#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, index = 1;
    printf("Enter a number:-");
    scanf("%d", &num);
    printf("Table of %d is:-\n", num);
    do
    {
        printf("%d X %d = %d\n", num, index, num*index);
        index += 1;
    } while (index <= 10);
    
    return 0;
}
