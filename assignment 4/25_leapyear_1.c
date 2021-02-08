#include <stdio.h>
int main()
{
    int n = 2100;
    int flag = 1;
    int flag_1 = 1;
    int flag_2 = 1;

    while (n % 400 == 0)
    {
        while (flag)
        {

            printf("it is a leap year \n");
            flag = 0;
        }
    }

    while (flag)
    {

        while (n % 100 == 0)
        {
            while (flag_1)
            {
                printf("it is not a leap year \n");
                flag_1 = 0;
            }
        }
    }
    while (flag)
    {
        while (flag_1)
        {

            while (n % 4 == 0)
            {
                while (flag_2)
                {
                    printf("it is a leap year \n");
                    flag_2 = 0;
                }
            }
        }
    }
    return 0;
}