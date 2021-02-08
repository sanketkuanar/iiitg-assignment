#include <stdio.h>
double absolute(double a);
int main()
{
    printf("%.2f", absolute(-5.65));
    return 0;
}

double absolute(double a)
{
    return a > 0.0 ? a : -a;
}