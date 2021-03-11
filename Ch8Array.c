#include<stdio.h>

int main(){
    
    /*
    int a[4]={0, 1, 2, 3};
    for (int i = 0; i < 4; i++){
        printf("%d\n",a[i]);
        //a[i]直接寫在上方 
    }
    
    int arr[] = {3,4,5,6,7};
    size_t sz = sizeof(arr)/sizeof(int);
    printf("%d",sz);
    */
    int a[10],i;
    for (i = 0; i <10; i++){   //i一定要從0開始
        a[i]=0;
        printf("%d",a[i]);
    }
    return 0;
}