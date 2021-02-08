# include<stdio.h>
int main(){
     int n = 1897;
     int digits = 0;
     
     for (;n; n /= 10)
     {
         digits++;
     }
     
     printf("digits : %d", digits);

     
     return 0;
}