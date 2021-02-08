#include <stdio.h>
int main()
{
    int n = 8;
    for (int i = 1; i <= (n + 1) / 2; i++)
    {

        for (int j = 1; j <= n / 2; j++)
        {
            if (j <= (n / 2) - i + 1)
            {
                printf("(");
            }
            else
            {
                printf(" ");
            }
        }

        for (int j = (n / 2) + 1; j <= n; j++)
        {
            if (j >= (n / 2) + i)
            {
                printf(")");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    for (int i = (n + 1) / 2 + 1; i < n; i++)
    {
        for (int j = 1; j <= (n + 1) / 2; j++)
        {
            if (j <= i - (n / 2) + 1)
            {
                printf("(");
            }
            else
            {
                printf(" ");
            }
        }
        for (int j = (n / 2) + 1; j <= n; j++)
        {
            if (j >= n - i + 4 )
            {
                printf(")");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}