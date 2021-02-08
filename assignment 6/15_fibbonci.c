#include <stdio.h>
int fibbonci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    return fibbonci(n - 1) + fibbonci(n - 2);
}
int main()
{
    int n = 10;
    printf("%d", fibbonci(n));
    return 0;
}