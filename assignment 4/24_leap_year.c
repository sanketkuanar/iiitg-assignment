#include <stdio.h>
int main()
{
    int n = 2100;
    int flag = 1;
    int flag_1 = 1;
    while (n % 400 == 0)
    {
        printf("it is a leap year \n");
        flag = 0;
        break;
    }
    while (flag)
    {

        while (n % 100 == 0)
        {
            printf("it is not a leap year \n");
            flag_1 = 0;
            break;
        }
        break;
    }

    while (flag_1)
    {

        while (n % 4 == 0)
        {
            printf("it is a leap year \n");
            break;
        }
        break;
    }

    return 0;
}