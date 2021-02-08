#include <stdio.h>
int main()
{
    int m = 17, i = 0;

    for (int n = 3; n <= m; n++)
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
            printf("%d is  prime \n", n);
        }
        else
        {
            printf("%d is not prime \n", n);
        }
    }

    return 0;
}