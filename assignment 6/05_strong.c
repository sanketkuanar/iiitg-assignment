#include <stdio.h>
int number(int a, int b);
int main()
{
    number(10, 999);
    return 0;
}

int number(int a, int b)
{
    for (int n = a; n <= b; n++)
    {
        int temp = n, sum_fact = 0;

        while (temp)
        {
            int b = temp % 10;
            int fact = 1;
            for (int i = 1; i <= b; i++)
            {
                fact *= i;
            }
            sum_fact += fact;
            temp /= 10;
        }
        if (sum_fact == n)
        {
            printf("%d is strong number \n", n);
        }
    }
}