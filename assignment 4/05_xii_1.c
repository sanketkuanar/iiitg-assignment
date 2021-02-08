#include <stdio.h>
int main()
{
    int n = 5, k = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= i)
            {
                printf("%d", k%10);
                k++;
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