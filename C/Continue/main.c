#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    for (int i = 1; i <= 100; i++)
    {
         if (i == 15)
        {
            continue;
        }
        printf("The value of num is:- %d\n", i);  
    }
    
    return 0;
}
