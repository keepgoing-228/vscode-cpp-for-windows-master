#include<stdio.h>

void bubble_sorted(int a[], int n){
    int i,j,temp;
    for (i = n-1; i > 0; i--){
        for(j = 0; j < i ; j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
int main(){
    int array[]= {11, 9, 55, 12};
    bubble_sorted(array,4);
    for(int i = 0; i< 4; i++){
        printf("%d ",array[i]);
    }
}
/*********************************************************
 * stable : 相同值的數值在排序前與排序後順序一樣
 * unstable : 相同值的數值在排序前與排序後順序不一樣
 * 
 * bubble sort的方法是屬於前者
 * *******************************************************/