#include<stdio.h> // This is a pre-processor. To see more about it press ctrl and click on it.

int main(int argc, char const *argv[])
{
    char name[15];
    printf("Enter your name:- ");
    scanf("%s", name);
    printf("Hello %s.", name);
    return 0;
}
