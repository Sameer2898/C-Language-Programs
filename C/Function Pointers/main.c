#include <stdio.h>

int sum(int num_1, int num_2)
{
    return num_1 + num_2;
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
    function_ptr = &sum;
    int derefrence = (*function_ptr)(num_1, num_2);
    printf("The value of derefrencing of the pointer is:- %d.", derefrence);
    return 0;
}
