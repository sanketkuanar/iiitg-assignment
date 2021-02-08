#include <stdio.h>
int nextpowerof2(int n)
{
    int power = 1;
    while (power < n)
    {
        power *= 2;
    }
    return power;
}
int main()
{
    int n = 65;
    printf("%d", nextpowerof2(n));
    return 0;
}