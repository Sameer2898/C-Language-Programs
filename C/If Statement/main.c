#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Please enter your age:-");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Your age is %d and you can vote.\n", age);
    }
    printf("We are now out form if bolck.");
    return 0;
}
