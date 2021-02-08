#include<stdio.h>
int main(){
   int n = 10;
   double s_x = 0;
   double x = 0.2;
   double p = 1.0, q = 1.0;
   for (int i = 1; i <= n; i++)
   {
       
       s_x += p/q;
       p *= x;
       q *= i;
   }
   printf("sum : %g", s_x);
   
return 0;
}