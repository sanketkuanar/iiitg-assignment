# include<stdio.h>
int main(){
     int n = 17, i = 0;

     for (i = 2; i < n/2; i++)
     {
         if (n % i == 0)
         {
             
             break;
         }
         
     }
     if (n % i != 0)
     {
         printf("%d is  prime", n);
     }
     else
     {
         printf("%d is not prime", n);
     }
     


     return 0;
}