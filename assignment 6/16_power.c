#include <stdio.h>
int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return x;
    }
    return x * power(x, n - 1);
}
int main()
{
    int x = 3, n = 4;
    printf("%d", power(x, n));
    return 0;
}