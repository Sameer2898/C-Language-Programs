#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *ptr = NULL;
    char string[15] = "Hello";
    // Reading from a file
    ptr = fopen("my_file.txt", "r");
    // fscanf(ptr, "%s", string);
    printf("The content of the file is:-\n%s", string);
    fclose(ptr);

    // Writing in to file
    ptr = fopen("my_file.txt", "a");
    fprintf(ptr, "\n%s", string);
    fclose(ptr);
    return 0;
}
