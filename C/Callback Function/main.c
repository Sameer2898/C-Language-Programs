#include <stdio.h>

int sum(int num_1, int num_2)
{
    return (num_1 + num_2) / 2;
    return num_1 + num_2;
}

// void  greet(int (*function_ptr) (int, int))
// {
//     printf("The addition is done.");
// }

void average(int num_1, int num_2, int (*function_ptr) (int num_1, int num_2))
{
    // printf("The average of %d and %d is:- %d", function_ptr(num_1, num_2));
    printf("The average of %d and %d is:- %d", num_1, num_2, function_ptr(num_1, num_2));
}

int main(int argc, char const *argv[])
{

    int num_1, num_2;
    printf("Enter the first number:- ");
    scanf("%d", &num_1);
    printf("Enter the second  number:- ");
    scanf("%d", &num_2);
    printf("The first numnber is:- %d\n", num_1);
    printf("The second numnber is:- %d\n", num_2);
    // Testing of the function
    printf("The sum of %d and %d is:- %d\n", num_1, num_2, sum(num_1, num_2));
    // Declaring a function pointer
    int (*function_ptr) (int, int);
    function_ptr = sum;
    average(num_1, num_2, function_ptr);
    return 0;
}
