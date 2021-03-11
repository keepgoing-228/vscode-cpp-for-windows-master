#include<stdio.h>

int main(){
    int stage = 1;
    int *ptr1 = &stage;
    int **ptr2 = &ptr1;

    printf("stage: %d\n",stage);
    printf("ptr1: %d\n",*ptr1);
    printf("ptr2: %d\n",**ptr2);//三個的值都是stage的值

    printf("stage: %d\n",stage);
    printf("ptr1: %d\n",ptr1);//stage的位置
    printf("ptr2: %d\n",ptr2);//ptr1的位置



    return 0;
}