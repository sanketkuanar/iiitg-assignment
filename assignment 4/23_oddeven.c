#include <stdio.h>
int main()
{
    int n = 7;
    int i = 2;
    int flag = 1;
    int flag_2 = 1;

    while (flag && n % 2 == 0)
    {
        printf("it is even \n");
        flag = 0;
    }
    while (flag && flag_2)
    {
        printf("it is odd \n");
        flag_2 = 0;
    }

    return 0;
}