#include <stdio.h>
int main()
{
    int k = 1, l = 1;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if (j <= 5 - i)
            {
                printf("(");
            }
            else
            {
                printf(" ");
            }
        }
        for (int j = 5; j <= 8; j++)
        {
            if (j >= 4 + i)
            {
                printf(")");
            }
            else
            {
                printf(" ");
            }
        }
        for (int j = 9; j <= 15; j++)
        {
            if (j >= 13 - i && j <= 11 + i)
            {
                printf("%d", k % 2);
                k++;
            }

            else
            {
                printf(" ");
            }
        }
        for (int j = 16; j <= 19; j++)
        {
            if (j <= 20 - i)
            {
                printf("(");
            }
            else
            {
                printf(" ");
            }
        }
        for (int j = 20; j <= 23; j++)
        {
            if (j >= 19 + i)
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
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if (j <= i + 1)
            {
                printf("(");
            }
            else
            {
                printf(" ");
            }
        }
        for (int j = 1; j <= 4; j++)
        {
            if (j >= 4 - i)
            {
                printf(")");
            }
            else
            {
                printf(" ");
            }
        }
        for (int j = 1; j <= 7; j++)
        {
            if (j >= i + 1 && j <= 7 - i)
            {
                printf("%d", l % 2);
                l++;
            }
            else
            {
                printf(" ");
            }
        }
        for (int j = 1; j <= 4; j++)
        {
            if (j <= i + 1)
            {
                printf("(");
            }
            else
            {
                printf(" ");
            }
        }
        for (int j = 1; j <= 4; j++)
        {
            if (j >= 4 - i)
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