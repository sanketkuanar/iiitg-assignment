#include <stdio.h>
int main()
{
    int n = 10;
    double x = 0.2;
    double s_sin = x;
    double p = x, q = 1.0, x2 = x * x;
    double sign = 1;
    for (double i = 2; i <= n; i++)
    {

        p *= x2;
        q *= (2 * i - 1) * (2 * i - 2);
        sign *= -1;
        s_sin += sign * (p / q);
    }
    printf("sum : %g", s_sin);

    return 0;
}