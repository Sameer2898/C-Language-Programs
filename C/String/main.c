#include <stdio.h>

int main(int argc, char const *argv[])
{
    char name[15];
    char city[15];
    printf("Enter your name:- ");
    gets(name);
    printf("Enter your city:- ");
    gets(city);
    printf("Your name is:- ");
    puts(name);
    printf("Your city is:- ");
    puts(city);
    
    return 0;
}
