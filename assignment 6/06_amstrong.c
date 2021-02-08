#include<stdio.h>
int number(int a, int b)
{
    for (int n = a; n <= b; n++)
    {
        int c = n;
        int sum = 0;

        while (c != 0)
        {
            int rem = c%10;
            
            sum += rem*rem*rem;

            c /= 10;
        }
        if (sum == n)
        {
            printf("amstrong : %d \n", n);
        }
        
    }
    
}
int main(){
    number(100, 999);
return 0;
}