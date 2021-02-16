#include <stdio.h>
int sum(int n)
{
    int rem = 0;
    if (n)
    {
        rem = n % 10;

        return rem + sum(n / 10);
    }
}
int main()
{
    int n = 12435;
    printf("sum of digit %d is %d", n, sum(n));

    return 0;
}