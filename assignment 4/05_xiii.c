#include<stdio.h>
int main(){
  int n = 7, m = 7, k = 0, l = 0;

  for (int i = 1; i <= n; i++)
  {
      if (i <= (n+1)/2)
      {
          for (int j = 1; j <= m; j++)
          {
              if (j <= i + k)
              {
                  printf("%d", j);
              }
              else
              {
                  printf(" ");
              }
              
          }
          printf("\n");
          k++;
      }
      else
      {
          for (int j = 1; j <= m; j++)
          {
              if (j <= i - 3*l)
              {
                  printf("%d", j);
              }
              else
              {
                  printf(" ");
              }
              
          }
          printf("\n");
          l++;
          
      }
      
  }
  
return 0;
}