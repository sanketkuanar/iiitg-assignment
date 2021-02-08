#include <stdio.h>
int main()
{
    int n = 100;
    double s1 = 0;
    double sign = 1.0;

    for (double i = 1; i <= n; i++)
    {
        s1 += sign *4*(1 / (2*i - 1));

        //printf("%g \n", sign*(1/(2*i-1)));

        sign *= -1.0;
    }
    printf("SUM : %g", s1);

    return 0;
}