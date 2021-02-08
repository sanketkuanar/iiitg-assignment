#include<stdio.h>
int main()
{
    double n = 7;
    double s_1 = 0.0;

    for (double i = 1; i <= n; i++)
    {
        s_1 += 1/i; 
    }
    printf("sum : %g", s_1);
return 0;
}