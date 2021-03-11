#include<stdio.h>
#define LEN 100

void store_zeros(int a[],int n){
    for (int i = 0; i<n; i++){
        a[i]= 0;
    }
    //不用return
}

int sum_array(int a[], int n){//順序很重要!!請看2.0
    int sum = 0;

    for (int i = 0; i< n; i++){
        sum += a[i];
    }
    return sum;
}


int main(){
    int b[LEN];
    int total;
    //store_zeros(b, 50);
    total = sum_array(b, 50);//b不用中誇號，在function那邊用就好
    printf("%d",total);
    return 0;
}