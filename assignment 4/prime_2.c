#include <stdio.h>
int main()
{
    int i = 0;
    for (int n = 3; n <= 100; n++)
    {

        for (i = 2; i < n / 2; i++)
        {
            if (n % i == 0)
            {

                break;
            }
        }
        if (n % i != 0)
        {
            printf("%d is prime \n", n);
        }
        else
        {
            printf("%d is not prime \n", n);
        }
    }

    return 0;
}