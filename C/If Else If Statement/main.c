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
    else if (17 <= age < 18)
    {
        printf("You may came next year to vote because you are between 17-18."); 
    }
    
    else
    {
        printf("You can not vote.");
    }
    
    
    return 0;
}
