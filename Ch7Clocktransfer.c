#include<stdio.h>

int main(){
    int hour, min;
    char time, x;
    scanf("%d:%d",&hour,&min);
    time = getchar();
    if(time =='P'){
        if(hour!=12){
            hour = hour + 12;
        }
    }else if(time =='A'){
        if(hour==12){
            hour = 0;
        }
    }
    printf("Equivalent 24-hour time: %2d:%2d\n",hour,min);


    return 0;
}