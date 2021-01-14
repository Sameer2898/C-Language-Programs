#include <stdio.h>
#include <stdlib.h>

int isPalindrome(int num)
{
    int reversed = 0;
    int originalNumber = num;
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    printf("The reversed number is %d.\n", reversed);
    if (originalNumber == reversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;
    printf("Enter a number to check whether it is a palindrome or not:- ");
    scanf("%d", &number);
    if (isPalindrome(number))
    {
        printf("The number %d is a palindrome number.",number);
    }
    else
    {
        printf("The number %d is not a palindrome number.",number);
    }
    return 0;
}