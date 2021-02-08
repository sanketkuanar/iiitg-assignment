#include <stdio.h>
int main()
{
    int n = 10;
    double s_l = 0.0;
    double sign = 1.0;
    double x = 0.2;

    for (double i = 1, last = x; i <= n; i++)
    {
        s_l += sign * last * (1 / i);
        last *= x;
        sign *= -1.0;
    }
    printf("sum : %g", s_l);

    return 0;
}