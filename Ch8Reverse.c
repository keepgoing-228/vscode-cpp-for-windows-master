#include<stdio.h>
#define N 10//陣列大小要先定義


int main(){
    int a[N];
    printf("Enter %d numbers:",N);
    for (int i = 0; i< N; i++){
        scanf("%d",&a[i]);
    }
    printf("In reverse number:");
    for (int j=0; j<N; j++){
        printf("  %d",a[(N-1)-j]);
    }


    return 0;
}