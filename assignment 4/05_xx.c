#include<stdio.h>
int main()
{
    int n = 7, k, l;

    for (int i = 1; i <= 4 ; i++)
    {
        k = 1;
        for (int j = 1; j <= n; j++)
        {
            if (j >= ((n+3)/2) - i && j <= ((n-1)/2) + i && k)
            {
                printf("*");
                k = 0;
            }
            else
            {
                printf(" ");
                k = 1;
            }
            
        }
        printf("\n");
    }
    for (int i = 1; i <= 3; i++)
    {
        l = 1;
        for (int j = 1; j <= n; j++)
        {
            if (j >= i + 1 && j <= n - i && l )
            {
                printf("*");
                l = 0;
            }
            else
            {
                printf(" ");
                l = 1;
            }
            
        }
        printf("\n");
    }
    
    
return 0;
}