#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, power;
    long long int value = 1;
    printf("Enter the number whose power you want to find:- ");
    scanf("%d", num);
    printf("Enter the power of the number:- ");
    scanf("%d", &power);
    for (int i = 0; i < power; i++)
    {
        value = value * num;
    }
    printf("The value of %d to the power %d is %lld.", num, power, value);
    
    return 0;
}
