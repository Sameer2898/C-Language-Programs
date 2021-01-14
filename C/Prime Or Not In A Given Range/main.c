#include <stdio.h>

int isPrime(int num)
{
    for (int i = 2; i*i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Enter first number:- ");
    scanf("%d", &num1);
    printf("Enter second number:- ");
    scanf("%d", &num2);
    printf("The prime numbers between %d and %d are:-\n", num1, num2);
    for (int i = num1; i <= num2; i++)
    {   
        if (isPrime(i))
        {
        printf("%d ", i);
        }
    }
    return 0;
}
