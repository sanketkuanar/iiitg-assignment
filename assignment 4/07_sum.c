#include <stdio.h>
int main()
{
    int n = 10;
    double x = 0.2;
    double s_cos = 1.0;
    double p = 1.0, q = 1.0, x2 = x * x;
    double sign = 1;
    for (double i = 2; i <= n; i++)
    {

        p *= x2;
        q *= (2 * i - 2) * (2 * i - 3);
        sign *= -1;
        s_cos += sign * (p / q);
    }
    printf("sum : %g", s_cos);

    return 0;
}