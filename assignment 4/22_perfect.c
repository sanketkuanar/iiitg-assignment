#include<stdio.h>
int main(){
    int n = 6;
    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
           sum += i; 
        }
        
    }
    if (sum == n)
    {
        printf("it is a perfect number \n");
    }
    else
    {
        printf("it is not \n");
    }
    
return 0;
}