#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    int *ptr;
    ptr = &num;
    printf("Enter the value of the number:- ");
    scanf("%d", &num);
    printf("The value of the number is %d.", *ptr);
    printf("\nThe address of the %d number is %d.", *ptr, &num);
    return 0;
}
