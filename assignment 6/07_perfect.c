#include <stdio.h>
int perfect(int a, int b)
{
    for (int i = a; i < b; i++)
    {
        int sum = 0;
        for (int n = 1; n < i; n++)
        {

            if (i % n == 0)
            {
                sum += n;
            }
        }
        if (sum == i)
        {
            printf("perfect number : %d \n", i);
        }
    }
}
int main()
{
    perfect(5, 100);

    return 0;
}