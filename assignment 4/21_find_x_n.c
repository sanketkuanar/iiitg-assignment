#include <stdio.h>
int main()
{
    double x = 3.0;
    int n = 3;

    double x_n = 1.0;

    for (int i = 1; i <= n; i++)
    {
        x_n *= x;
    }
    printf("(%g)^(%d) = (%g) \n", x, n, x_n);

    return 0;
}