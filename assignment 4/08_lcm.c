# include<stdio.h>
int main(){
     int a = 10, b = 19;

     int lcm = 0;
    int max = a > b ? a : b;

    for(lcm = max; ;lcm += max){
        
        if (lcm%a == 0 && lcm % b == 0)
        {
            break;
        }
        
    }
    printf("lcm : %d", lcm);
     return 0;
}