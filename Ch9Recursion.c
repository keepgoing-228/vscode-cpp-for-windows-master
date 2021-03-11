#include<stdio.h>

int fact(int n){
    if (n <= 1){
        return 1;
    }else{
        return n* fact(n-1);
    }
}

int power(int x, int n){
    if (n==0)
        return 1;
    else
        return x * power(x, n-1);
    //等於   return n == 0 ? 1 : x * power(x, n - 1);
}

int main(){
    printf("%d\n",fact(4));
    printf("%d\n",power(2,5));
    //printf("%f",fact(4.1));//測資是0.000000
    return 0;
}