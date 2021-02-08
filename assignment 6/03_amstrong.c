#include <stdio.h>
int number(int a);
int main()
{
    int c = 153;
    if (number(c))
    {
        printf("it is amstrong no. \n");
    }
    else
    {
        printf("it is not \n");
    }

    return 0;
}

int number(int a)
{
    int sum = 0, n;
    int b = a;

    while (b != 0)
    {
        n = b % 10;
        sum += n * n * n;

        b /= 10;
    }

    if (sum == a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}