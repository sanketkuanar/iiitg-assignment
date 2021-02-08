#include <stdio.h>
int prime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
        return 1;
    }
}
void printallprimes(int a, int b){
    for ( ; a <= b; a++)
    {
        if (prime(a))
        {
            printf("%d \n", a);
        }
        
    }
    
}
int main()
{

    printallprimes(10,20);
    return 0;
}