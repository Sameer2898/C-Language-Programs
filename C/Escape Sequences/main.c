#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("\\a for Beep.\n");
    printf("\\b for Backspace.\n");
    printf("\\f for Form Feed.\n");
    printf("\\n for New Line.\n");
    printf("\\r for Carriage Retrun.\n");
    printf("\\t for Horizontal Tab.\n");
    printf("\\v for Vertical Tab.\n");
    printf("\\ for Backslash.\n");
    printf("\' for Single Quote.\n");
    printf("\" for Double Quote.\n");
    printf("\? for Question Mark.\n");
    printf("\\nnn for Octal Numbers.\n");
    printf("\\xhh for Hexadecimal Numbers.\n");
    printf("\0 for Null.\n");
    return 0;
}
