#include <stdio.h>
int main()
{
    int number = 10;
    int u = 0, v = 1;

    printf("fibo(%d) = %d\n", 0, u);
    for (int i = 1; i <= number; i++)
    {
        printf("fibo(%d) = %d\n", i, v);
        int next = u + v;
        u = v;
        v = next;
    }

    return 0;
}