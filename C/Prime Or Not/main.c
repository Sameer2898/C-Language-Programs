#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int isPrime = 1;
    printf("Please enter a number:- ");
    scanf("%d", &n);
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;

        }
        
    }
    
    if (isPrime)
    {
        printf("The number %d is prime.", n);
    }
    else
    {
        printf("The number %d is not prime.", n);
    }

    return 0;
}