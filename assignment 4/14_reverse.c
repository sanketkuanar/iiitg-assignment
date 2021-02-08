#include<stdio.h>
int main()
{
int n = 134, reverse = 0, rem;

while (n)
{
    rem = n%10;
    reverse = reverse*10 + rem;
    n /= 10;
}
printf("reverse is %d", reverse);
return 0;
}