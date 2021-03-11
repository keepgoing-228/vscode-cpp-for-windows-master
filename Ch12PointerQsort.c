#include <stdio.h>
#define N 10
void quicksort(int a[],int *low,int *high);
int *split(int a[], int *low, int *high);

int main(){
    /*store the array*/
    int a[N];
    int i;
    for(i = 0;i <N;i++){
        scanf("%d",&a[i]);
    }
    /*sort it*/
    quicksort(a,&a[0],&a[N-1]);
    /*print it*/
    printf("In sorted order:");
    for(i = 0; i<N; i++){
        printf(" %d",a[i]);
    }
    return 0;
}

void quicksort(int a[],int *low,int *high){
    int *middle;
    if(low>=high)
        return;
    middle = split(a, low, high);
    quicksort(a,low, middle-1);
    quicksort(a,middle + 1,high);
}

int *split(int a[], int *low, int *high){
    int part_element = *low;
    for (;;){
        while(low<high && part_element<= *high){
            high--;
        }
        if(low>=high)
            break;
        *low++ = *high;

        while(high>low && *low <= part_element){
            *low++;
        }
        if(low>=high)
            break;
        *high-- = *low; 
    }
    *high = part_element; 
    return high;
}