# include<stdio.h>
int main(){
     
     int n = 134;

     int sum = 0, product = 1;

     while (n)
     {
         sum += n%10;
         product = product*(n%10);
         n /= 10;
     }
     printf("sum : %d \n", sum);
     printf("product : %d", product);
     return 0;
}