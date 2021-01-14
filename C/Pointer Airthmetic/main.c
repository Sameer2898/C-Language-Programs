#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 5;
    int* ptr_num = &num;
    printf("The numebr is %d.\n", num);
    printf("The point to %d is %d.\n", num, ptr_num);
    printf("After incrementing the address of %d to %d.\n", num, ptr_num+1);
    printf("After incrementing the address of %d to %d.\n", num, ptr_num+2);
    return 0;
}
