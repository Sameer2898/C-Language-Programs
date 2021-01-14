#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    int rem = 0;
    int arr[10];
    int i = 0;
    printf("Enter the deciaml number:- ");
    scanf("%d", &num);
    while (num)
    {
        rem = num % 2;
        num = num / 2;
        arr[i] = num;
        i++;
    }

    printf("The binary conversion of %d is:- ", num);
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }
    
    return 0;
}
