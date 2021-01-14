#include <stdio.h>
#include <math.h>

float equliden_distance(int x1, int x2, int y1, int y2)
{
    int distance;
    distance = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    return sqrt(distance);
}

float area_of_circle(int x1, int x2, int y1, int y2, float(*function_pointer)(int x1, int x2, int y1, int y2))
{
    // printf("The area of the circle is %d.", function_pointer(x1, x2, y1, y2));
    return function_pointer(x1, x2, y1, y2);
}

int main(int argc, char const *argv[])
{
    int x1, x2, y1, y2;
    float e_distance;
    
    printf("Enter the value of x1:- ");
    scanf("%d", &x1);

    printf("Enter the value of x2:- ");
    scanf("%d", &x2);

    printf("Enter the value of y1:- ");
    scanf("%d", &y1); 

    printf("Enter the value of y2:- ");
    scanf("%d", &y2);

    printf("The value of x1 is %d.\n", x1);
    printf("The value of x2 is %d.\n", x2);
    printf("The value of y1 is %d.\n", y1);
    printf("The value of y2 is %d.\n", y2);

    e_distance = area_of_circle(x1, x2, y1, y2, equliden_distance);
    printf("The distance between %d, %d, %d and %d is %f.", x1, x2, y1, y2, e_distance);
    return 0;
}
