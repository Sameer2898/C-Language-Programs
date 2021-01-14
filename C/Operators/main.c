#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter the first number:- ");
    scanf("%d", &a);
    printf("Enter the second number:- ");
    scanf("%d", &b);
    printf("Arithmetic Operators:-\n");
    printf("A + B:- %d\n", a + b);
    printf("A - B:- %d\n", a - b);
    printf("A * B:- %d\n", a * b);
    printf("A / B:- %d\n", a / b);
    printf("A % B:- %d\n", a % b);
    printf("Relational Operators:-\n");
    printf("A < B:- %d\n", a < b);
    printf("A > B:- %d\n", a > b);
    printf("A <= B:- %d\n", a <= b);
    printf("A >= B:- %d\n", a >= b);
    printf("A == B:- %d\n", a == b);
    printf("A != B:- %d\n", a != b);
    printf("Logical Operators:-");
    printf("A && B:- %d\n", a && b);
    printf("A || B:- %d\n", a || b);
    printf("!A:- %d\n", !a);
    printf("!B:- %d\n", !b);
    printf("Bitwise Operators:-");
    printf("A & B:- %d\n", a & b);
    printf("A | B:- %d\n", a | b);
    printf("A ^ B:- %d\n", a ^ b);
    printf("Assignment Operators");
    printf("A = B:- %d\n", a = b);
    printf("A += B:- %d\n", a += b);
    printf("A -= B:- %d\n", a -= b);
    printf("A *= B:- %d\n", a *= b);
    printf("A /= B:- %d\n", a /= b);
    printf("A %= B:- %d\n", a %= b);
    return 0;
}
