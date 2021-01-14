#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Please follow the instructions here is a surprise for you.\n");
    printf("Enter 1 if you pass in both math and science.\n");
    printf("Enter 2 if you pass only in math.\n");
    printf("Enter 3 if you pass only in science.\n");
    printf("Please select between 1, 2 and 3:-");
    scanf("%d", &num);
    printf("You entered %d.\n", num);
    if (num == 1)
    {
        printf("As you pass in both math and science. So you get a cash prize of 45.");
    }
    else if (num == 2)
    {
         printf("As you pass only in math. So you get a cash prize of 15.");
    }
    else if (num == 3)
    {
         printf("As you pass only in science. So you get a cash prize of 15.");
    }
    else
    {
        printf("You are not qualify the above criteria. So better luck next time.");
    }
    return 0;
}