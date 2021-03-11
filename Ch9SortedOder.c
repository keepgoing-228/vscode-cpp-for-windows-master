#include<stdio.h>
#define SIZE 10   //max size of array

void selection_sort (int n,int a[]){    //這裡可以不寫陣列大小，是指標
    int high = a[0]; //store the highest number found in array
    int high_index = 0; //index of high value
    int temp; //暫存

    for(int i = 0; i <n ;i++ ){
        if (high < a[i]){
            high = a[i];
            high_index = i;
        }
    }

    if (high != a[n-1]){
        temp = a[n-1];
        a[n-1]= high;
        a[high_index]= temp;
    }

    if (n > 1){
        selection_sort(n-1,a);
    }    

    return;
    /*int len = (sizeof(a)/sizeof(a[0]));
    for(int i = 0; i< len; i++){
        if (a[i+1] != ' '){
            if(a[i]>=a[i+1]){
                a[i]= a[i+1];
                a[i+1]= a[i];
            }
        }
        i++;
    }
    */
}

int main(){
    int size = SIZE;
    int a[SIZE];
    /*put in array*/
    for (int i = 0; i < SIZE; i++){
        scanf("%d",&a[i]);
    }

    /*call fuction*/
    selection_sort(size,a);

    /*print out*/
    printf("In sorted order:");
    for(int i = 0; i< SIZE; i++){
        printf(" %d",a[i]);
    }
    return 0;
}