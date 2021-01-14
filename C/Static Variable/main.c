#include <stdio.h>

int main(int argc, char const *argv[])
{
    static int a;
    static int b;
    printf("Enter a number:- ");
    scanf("%d", &a);
    printf("The value of the number is %d.\n",a);
    printf("The value of the default set by static variable is %d.", b);
    return 0;
}
