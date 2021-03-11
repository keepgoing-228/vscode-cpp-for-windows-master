#include<stdio.h>

int digit(int n, int k){
    //不用全部分割，分到k就好
    for(int i=0; i<k-1;i++){
        //錯   n%10;
    n /= 10;//取十位數左邊的
    }

    return n%10;//取個位數
}


int main(){
    printf("%d",digit(829,2));
    return 0;
}