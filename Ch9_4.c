#include<stdio.h>

int day_of_year(int month, int day, int year){
    int month_day[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int count= 0;
    for(int i= 0; i< month-1;i++){
        count += month_day[i];
    }
    if (year%4==0 && month>=2){
        count ++;
    }

    return count + day;
}

int main(){
    printf("%d",day_of_year(11,19,2020));
    return 0;
}