# include<stdio.h>
int main(){
     int n = 4, k = 0;
     for (int i = 1; i <= n; i++)
     {
         for (int j = 1; j <= 4; j++)
         {
             if (j <= n - i+ 1)
             {
                 printf("<");
             }
             else
             {
                 printf(" ");
             }
         }
         for (int j = n + 1; j <= 2*n; j++)
         {
             if (j <= n + i)
             {
                 printf("(");
             }
             else
             {
                 printf(" ");
             }
             
         }
         for (int j = 2*n + 1; j <= 3*n ; j++)
         {
             if (j >= 3 *n - k)
             {
                 printf(")");
             }
             else
             {
                 printf(" ");
             }
             
         } 
          for (int j = 3*n + 1; j <= 4*n ; j++)
         {
             if (j >= 4 *n - k)
             {
                 printf(">");
             }
             else
             {
                 printf(" ");
             }
         }
         k++;
         printf("\n");
         
     }
     

     return 0;
}