#include<stdio.h>
//#define LEN 100

void store_zeros(int n,int a[n]){
    for (int i = 0; i<n; i++){
        a[i]= 0;
    }
}
int sum_array(int n, int a[*]){//P61
    int sum= 0;
    for(int i=0; i< n; i++){
        sum += a[i];
    }
    return sum;
}

int main(){
    //int b[LEN];
    int total;
    int b[] = {1,2,3,4,5,6,7,8,9};
    total = sum_array(5,b);
    printf("%d",total);
    return 0;
}