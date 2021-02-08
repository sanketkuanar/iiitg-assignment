# include<stdio.h>
int main(){
     int n = 18, i = 0;

     for (i = 2; i < n; i++)
     {
         if (n % i == 0)
         {
             break;
         }
         
     }
     if (i == n)
     {
         printf("%d is  prime", n);
     }
     else
     {
         printf("%d is not prime", n);
     }
     


     return 0;
}