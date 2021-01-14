// Syntax of typedef
// typeded <previous_name> <alias_name>;

#include <stdio.h>

int main(int argc, char const *argv[])
{
    typedef int i; // Now i am useing int(integer) as i.
    i num;
    printf("Enter a number:- ");
    scanf("%d", &num);
    printf("You entered number %d.", num);
    return 0;
}
