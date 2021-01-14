#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int num;
    printf("Enter the number to print mutipication table:-");
    scanf("%d", &num);
    printf("Multipaction table of %d is:-\n", num);
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", num, i+1, (i+1)*num);
    }
    return 0;
}
