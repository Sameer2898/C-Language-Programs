#include <stdio.h>

int myfunc(int a, int b)
{
    // auto int var;
    static int var;
    var++;
    printf("The value of var is %d.\n", var);
    // return var;
}

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter the first number:- ");
    scanf("%d", &a);
    printf("Enter the first number:- ");
    scanf("%d", &b);
    register int var = myfunc(a, b);
    var = myfunc(a, b);
    return 0;
}
