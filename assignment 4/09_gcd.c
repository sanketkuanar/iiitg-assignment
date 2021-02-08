# include<stdio.h>
int main()
{
    int a = 10 , b = 20;

    int gcd = 0;
    int min = a<b ? a : b ;

    for (gcd = min;; gcd--)
    {
        if (a % gcd == 0 && b % gcd == 0)
        {
            break;
        }
        
    }
         printf("%d is gcd", gcd);
     return 0;
}