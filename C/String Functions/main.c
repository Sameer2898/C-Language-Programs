#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char string_1[15];
    char string_2[15];
    printf("Enter a string:- ");
    gets(string_1);
    printf("The string is:- ");
    puts(string_1);
    printf("Enter another string:- ");
    gets(string_2);
    printf("The another string is:- ");
    puts(string_2);
    printf("The uppercase of %s is %s.", string_1, strupr(string_1));
    printf("\nThe lowercase of %s is %s.", string_1, strlwr(string_1));
    printf("\nThe %s is the freind of %s.", string_1, string_2);
    puts(strcat(string_1, string_2));
    printf("The reverse of the string is:- ");
    printf(strrev(string_1));
    printf("\nThe length of the string is:- %d", strlen(string_1));
    return 0;
}
