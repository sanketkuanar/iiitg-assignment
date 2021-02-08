#include <stdio.h>
int main()
{
    int number = 145;
    int temp = number, sum_fact = 0;
    while (temp)
    {
        int n = temp%10;
        int fact = 1;

        for (int i = 1;i <= n; i++)
    {
        fact *= i;
    }
        sum_fact += fact;
        temp /= 10;
    }
    if (number = sum_fact)
    {
        printf("it is a strong number \n");
    }
    else
    {
        printf("it is not a strong numner \n");
    }
    

    return 0;
}