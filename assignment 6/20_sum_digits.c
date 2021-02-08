#include <stdio.h>
int digits(int n)
{

    if (n == 0)
    {
        return 0;
    }
    return (n % 10) + digits(n / 10);
}
int main()
{
    int n = 13223;
    printf("%d", digits(n));

    return 0;
}