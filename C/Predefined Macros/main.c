#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("The current line is %d.\n", __LINE__);
    printf("The current file is %s.\n", __FILE__);
    printf("The current date is %s.\n", __DATE__);
    printf("The current time is %s.\n", __TIME__);
    // printf("The compiler standard number is:- %d.\n", __STDC__);
    printf("The stdc hosted number is:- %d.\n", __STDC_HOSTED__);
    // printf("The compiler standard version number is:- %d.", __STDC_VERSION__);
    return 0;
}