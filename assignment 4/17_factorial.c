#include <stdio.h>
int main()
{
    int n = 6;
    int m = n;
    int fact = 1;

    for (; n; n--)
    {
        fact *= n;
    }
    printf("factorial of %d is %d", m, fact);
    return 0;
}