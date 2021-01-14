#include <stdio.h>

int main(int argc, char const *argv[])
{
    char s[] = "Sameer";
    int count = 0;
    int temp;
    while (s[count] != '\0')
    {
        count++;
    }
    printf("The string is %s.\n", s);
    printf("The characters in %s is %d.\n", s, count);
    for (int i = 0; i < (count-1)/2; i++)
    {
        temp = s[i];
        s[i] = s[count-1-i];
        s[count-1-i] = temp;
    }
    printf("REversed string is %s.\n", s);
    printf("The characters in %s is %d.", s, count);
    return 0;
}
