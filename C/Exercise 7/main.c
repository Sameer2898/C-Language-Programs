#include <stdio.h>

struct driver
{
    char name[45];
    char dl[46];
    char route[47];
    int km;
};
int main()
{
    struct driver d1, d2;

    // Entering the details of driver 
    printf("Please enter your details\n");
    printf("Enter your name:");
    scanf("%s", &d1.name);
    printf("Enter your driving license:");
    scanf("%s", &d1.dl);
    printf("Enter the route on which you driven:");
    scanf("%s", &d1.route);
    printf("Enter kilometers you driven:");
    scanf("%d", &d1.km);
    // Printing the details of driver 
    printf("Your name is: %s\n", d1.name);
    printf("Your driving license is: %s\n", d1.dl);
    printf("Your route is: %s\n", d1.route);
    printf("You have drived %d killometers.\n", d1.km);

    // Entering the detains of driver 
    printf("Please enter your details\n");
    printf("Enter your name:");
    scanf("%s", &d2.name);
    printf("Enter your driving license:");
    scanf("%s", &d2.dl);
    printf("Enter the route on which you driven:");
    scanf("%s", &d2.route);
    printf("Enter kilometers you driven:");
    scanf("%d", &d2.km);
    // Printing the details of driver 
    printf("Your name is: %s\n", d2.name);
    printf("Your driving license is: %s\n", d2.dl);
    printf("Your route is: %s\n", d2.route);
    printf("You have drived %d killometers.\n", d2.km);

    return 0;
}