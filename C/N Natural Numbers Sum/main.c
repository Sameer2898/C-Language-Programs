#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, sum = 0;
    printf("Enter the number from where you want to find the sum:- ");
    scanf("%d", &num);
    
    /*Runs in the linear time
    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }*/

    // Runs in constant time
    sum = (num * num + num) / 2;
    printf("Sum of first %d natural numbers is:- %d", num, sum);
    return 0;
}
