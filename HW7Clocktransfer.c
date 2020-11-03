#include<stdio.h>

int main(){
    int hour, min;
    char time, x;
    scanf("%d:%d",&hour,&min);
    time = getchar();
    if(time =='P' && hour != 12){
        hour = hour + 12;
    }
    printf("Equivalent 24-hour time: %d:%d\n",hour,min);


    return 0;
}