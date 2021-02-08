#include <stdio.h>
int main()
{
    int n = 10;
    double s1 = 0;
    double sign = 1.0;

    for (double i = 1; i <= n; i++)
    {
        s1 += sign * (1 / i);

        //printf("%g \n", sign*(1/i));

        sign *= -1.0;
    }
    printf("SUM : %g", s1);

    return 0;
}