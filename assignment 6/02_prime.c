#include <stdio.h>

int main()
{
    int n = 5, prime(int a);
    if (prime(n))
    {
        printf("number is prime \n");
    }
    else
    {
        printf("number is not prime \n");
    }
}
int prime(int a)
{

    for (int i = 2; i < a / 2; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}