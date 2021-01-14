#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Please enter your number:-");
    scanf("%d", &num);
    printf("You entered %d.\n", num);
    if (num >= 15)  
    {
        if (num >= 50)
        {
            printf("%d is greater than 50.", num);
        }
        else
        {
            printf("%d is less then 50.", num);
        }
    }
    else
    {
        printf("%d is less than 15.", num);
    }
    return 0;
}
