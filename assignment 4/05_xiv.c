#include <stdio.h>
int main()
{
    int n = 4;
    int m = n;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == n - i + 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}