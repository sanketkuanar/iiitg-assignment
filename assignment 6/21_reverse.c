#include<stdio.h>
int reverse(int n, int r){
    

    if (n==0) {
         return r;
    }
    else{
        return reverse(n/10, r*10 + n%10);
    }

}
int main(){
    int n = 4367;
    printf("%d", reverse(n,0));
return 0;
}