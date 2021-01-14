#include <stdio.h>

int reverse(int num)
{
    int reverser = 0, remainder;
    while(num != 0)
    {
        remainder = num % 10;
        reverser = reverser * 10 + remainder;
        num = num / 10;
    }
    return reverser;
}

int main(int argc, char const *argv[])
{
    int num;
    int reverser = reverse(num);
    printf("Enter a number:- ");
    scanf("%d", &num);
    printf("The reverse of the %d is %d.", num, reverser);
    return 0;
}
