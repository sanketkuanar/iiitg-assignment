#include <stdio.h>
int sum_odd(int n, int m)
{
    if (n > m)
    {
        return 0;
    }
    else if (n == m && n % 2 == 1)
    {
        return n;
    }
    else if (m % 2 == 0)
    {
        return sum_odd(n, m - 1);
    }
    return m + sum_odd(n, m - 2);
}
int main()
{
    int n = 3, m = 9;
    printf("%d", sum_odd(n, m));
    return 0;
}