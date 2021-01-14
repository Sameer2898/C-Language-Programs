#include <stdio.h>

// Recursive apporch
// int fibonacci(int num)
// {
//     if (num == 0)
//     {
//         return 0;
//     }
//     else if (num == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return fibonacci(num - 1) + fibonacci(num - 2);
//     }
// }

// Iterative approach
int fibonacci(int num)
{
    int previous_number = 0, current_number = 1, previous_previous_number;
    for (int i = 1; i < num; i++)
    {
        previous_previous_number = previous_number;
        previous_number = current_number;
        current_number = previous_number + previous_previous_number;
    }
    return current_number;
    

}

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number to find its fibonaccii series:- ");
    scanf("%d", &num);
    printf("Fibonaccii series number at %d is %d.", num, fibonacci(num));
    return 0;
}
