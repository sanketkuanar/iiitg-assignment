#include <stdio.h>
int sum_even(int n, int m)
{
    if (n > m)
    {
        return 0;
    }
    else if (n == m && n % 2 == 0)
    {
        return n;
    }
    else if (m % 2 == 1)
    {
        return sum_even(n, m - 1);
    }

    return m + sum_even(n, m - 2);
}
int main()
{
    int n = 3, m = 17;
    printf("%d", sum_even(n, m));

    return 0;
}