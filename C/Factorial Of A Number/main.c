#include <stdio.h>

// Iterative approch
// int factorial(int num)
// {
//     int value = 1;
//     for (int i = 1; i > 1; i--)
//     {
//         value *= i;
//     }
//     return value;
// }

// Recursive approch
int factorial(int num)
{
    if (num == 0 || num ==1)
    {
        return 1;
    }
    else
    {
        return (num * (factorial(num - 1)));
    } 
}

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number:- ");
    scanf("%d", &num);
    int ans = factorial(num);
    printf("The factorial of %d is %d.", num, ans);
    return 0;
}
