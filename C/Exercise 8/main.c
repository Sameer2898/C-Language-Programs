#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int chars, i = 0;
    char a, b;
    char *ptr;
    int employees;
    printf("Enter the number of employees you have:- ");
    scanf("%d", employees);
    while (i < employees)
    {
        printf("Employee %d:\nEnter the number of characters in your employee id:- ", i + 1);
        scanf("%c", &chars);
        printf("Enter the value of a:-");
        scanf("%c", &a);
        getchar();
        printf("Enter the value of b:-");
        scanf("%c", &b);
        ptr = (char *) malloc((chars + 1) * sizeof(char));
        printf("Enter your employee id:- ");
        scanf("%s", ptr);
        printf("Your employee id is %s.", ptr);
        free(ptr);
        i = i + 1;
    }
    
    return 0;
}
