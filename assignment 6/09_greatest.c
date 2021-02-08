#include <stdio.h>
int max(int a, int b, int c)
{
    if (a > b && a > c)
    {
        printf("%d", a);
    }
    if (b > a && b > c)
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", c);
    }
}
int main()
{
    max(12, 15, 28);
    

        return 0;
}