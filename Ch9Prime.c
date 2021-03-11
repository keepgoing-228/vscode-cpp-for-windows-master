#include<stdio.h>
#include<stdbool.h>

bool is_prime(int n){
    int divisor;
    if (n <= 1){
        return false;
    }
    for (divisor = 2; divisor < n;divisor++){//  for (divisor = 2; divisor * divisor <= n; divisor++)
        if (n %divisor==0){
            return false;
        }
    }
    
    return true;
}


int main(){
    int i;
    scanf("%d",&i);
    if(is_prime(i)){
        printf("is prime\n");
    }else{
        printf("is not prime\n");
    }
    return 0;
}