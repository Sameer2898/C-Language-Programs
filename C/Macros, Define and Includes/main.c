#include <stdio.h> // To include file from where the system header files are held.
// # include "name_of_the_program_to_include" // Enter the name of the file which you want to include in the current program. This will look the files in the current directory to include in the current program.

#define PI 3.14
#define SQUARE(r) r * r
int main(int argc, char const *argv[])
{
    float value_of_pi = PI;
    int radius;
    printf("The value of the pi is %f.", value_of_pi);
    printf("\nEnter the radius of the circle:- ");
    scanf("%d", &radius);
    printf("The radius of the circle is:- %d", radius);
    printf("\nThe area of the circle is:- %f.", PI * SQUARE(radius));
    return 0;
}
