#include<stdio.h>

void max_mix(int a[], int n,int *max,int *min);

int main(){
    int b[10],big,small;
    printf("Enter 10 numbers: ");
    for (int i = 0;i < 10; i++){
        scanf("%d",&b[i]);
    }
    max_mix(b,10,&big,&small);
    printf("Largest: %d\n",big);
    printf("Smallest: %d\n",small);

    return 0;
}


void max_mix(int a[], int n,int *max,int *min){
    *max = *min = a[0];
    for (int i = 0; i< 10;i++){
        if (*max < a[i]){
            *max= a[i];
        }else if(*min > a[i]){
            *min= a[i];
        }
    }
}