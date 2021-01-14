#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i = 0;
    int *ptr;

    while (i < 50000)
    {
        printf("Please free the memory of heap to avoid memory leak.\n");
        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
    }
    free(ptr);
    return 0;
}
