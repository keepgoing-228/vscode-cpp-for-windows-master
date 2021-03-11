#include<stdio.h>
#define LEN 100

int sum_array(int a[], int n){
    int sum = 0;
    for (int i = 0; i< n; i++){
        sum += a[i];
    }
    return sum;
}


int main(){
    //int b[LEN];
    int total;
    total = sum_array((int []){1,9,2,6,1}, 4);
    printf("%d",total);
    return 0;
}