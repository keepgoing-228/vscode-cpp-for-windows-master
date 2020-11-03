#include<stdio.h>
#include<stdlib.h>//亂數相關函數
#include<time.h>//時間相關函數

int main(){
    srand(time(NULL));//亂數起始種子
    int a;
    int min = 100000000;//因為身分證有9位數字所以需要限制範圍
    int max = 999999999;
    int x = rand() % (max - min + 1) + min;

    a = rand()%26;
    a += 'A';//轉換成大寫英文
    printf("ID: %c",a);
    printf("%d",x);

    return 0;
}