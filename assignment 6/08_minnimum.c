#include <stdio.h>
int min(int a, int b);

int main()
{
    min(10, 37);
    return 0;
}

int min(int a, int b)
{
    int c = a < b ? a : b;
    printf("%d is minm. \n", c);
}