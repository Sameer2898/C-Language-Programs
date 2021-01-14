#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    int i;
    float f;
    double d;
    long l;
    // Character
    printf("Enter a character:- ");
    scanf("%c", &ch);
    printf("The character is %c\n", ch);
    printf("Size of  character %c is %d:- ", ch, sizeof(ch));

    // Integer
    printf("\nEnter a number without decimal point:- ");
    scanf("%d", &i);
    printf("The character is %d\n", i);
    printf("Size of integer %d is %d:- ", i, sizeof(i));

    // Float
    printf("\nEnter a number with decimal point:- ");
    scanf("%f", &f);
    printf("The character is %f\n", f);
    printf("Size of floating point number %f is %d:- ", f, sizeof(f));

    // Double
    printf("\nEnter a number:- ");
    scanf("%lf", &d);
    printf("The character is %lf\n", d);
    printf("Size of double %lf is %d:- ", d, sizeof(d));

    // Long
    printf("\nEnter a number:- ");
    scanf("%Lf", &l);
    printf("The character is %Lf\n", l);
    printf("Size of double %Lf is %d:- ", l, sizeof(l));
    return 0;
}
