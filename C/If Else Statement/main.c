#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Please enter your age:-");
    scanf("%d", &age);
    printf("Your age is %d.\n", age);
    if (age >= 18)
    {
        printf("You can vote.");
    }
    else
    {
        printf("You can not vote.");
    }
    
    
    return 0;
}
