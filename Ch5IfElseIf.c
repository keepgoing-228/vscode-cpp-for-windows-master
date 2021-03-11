#include<stdio.h>

int main(){
    int score;
    scanf("%d",&score);
    if (score<=40 && score >=30){
        score = score *1.5;
    }
    else if (score<=50 && score >=40){
        score = score *1.4;
    }    
    else if (score<=60 && score >=50){
        score = score *1.2;
    }    
    printf("Your score is :%d",score);

    /*
    段考成績太差，老師決定要調整成績，讓及格邊緣的同學及格
    */
    return 0;
}