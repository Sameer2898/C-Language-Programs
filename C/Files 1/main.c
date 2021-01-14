#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "r+");
    char *c = fgetc(ptr);
    // printf("The character I read is %c.",c);
    // c = fgetc(ptr);
    // printf("The character I read is %c.",c);

    char str[4];
    fgets(str, 5, ptr);
    printf("The string is %s.",str);
    fputc('o',ptr);
    fputs("This is new file.",ptr);
    fclose(ptr);
    return 0;
}