#include <stdio.h>
int digits(int n)
{
    int i = 1;
    if (n == 0)
    {
        return 0;
    }
    return i + digits(n / 10);
}
int main()
{
    int n = 132233;
    printf("%d", digits(n));

    return 0;
}