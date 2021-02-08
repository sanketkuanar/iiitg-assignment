#include <stdio.h>
int enter(int n)
{
    int last = 0;
    while (n)
    {
        last = n;
        n /= 10;
    }
    return last;
}
int main()
{
    int n = 7343;
    printf("%d", enter(n));
    return 0;
}