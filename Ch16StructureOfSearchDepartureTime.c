#include<stdio.h>
#include<time.h>
#include<string.h>
struct flight{
    int depature_time;
    int arrival_time;
};

struct flight flights[] = {
  {480, 616}, {583,  712}, { 679,  811}, { 767,  900},
  {840, 968}, {945, 1075}, {1140, 1280}, {1305, 1438}
};

struct time{
    int hours;
    int minutes;
    char zone[100];//字串通常用指標(錯)。直接array
};

// 總分鐘數轉小時分鐘的function
struct time split_Dtime(int i);
struct time split_Atime(int i);

int main(){
    int hours,mins,total;
    scanf("%d:%d",&hours,&mins);
    total = hours * 60 + mins;
    for(int i = 0; i < 8; i++){
        if((total > flights[i].depature_time)&&(total<flights[i+1].depature_time)){
            if((total - flights[i].depature_time ) <(flights[i+1].depature_time -total)){
                struct time my_Dtime = split_Dtime(i);
                struct time my_Atime = split_Atime(i);
                printf("Closest departure time is %d:%02d %s, arriving at %d:%02d %s\n",my_Dtime.hours, my_Dtime.minutes, my_Dtime.zone, my_Atime.hours, my_Atime.minutes, my_Atime.zone);
                //要表示成00的樣子:%02d
            }else{
                struct time my_Dtime = split_Dtime(i+1);
                struct time my_Atime = split_Atime(i+1);
                printf("Closest departure time is %d:%02d %s, arriving at %d:%02d %s\n",my_Dtime.hours, my_Dtime.minutes, my_Dtime.zone, my_Atime.hours, my_Atime.minutes, my_Atime.zone);
            }
        }else if(total < flights[0].depature_time){
            struct time my_Dtime = split_Dtime(0);
            struct time my_Atime = split_Atime(0);
            printf("Closest departure time is %d:%02d %s, arriving at %d:%02d %s\n",my_Dtime.hours, my_Dtime.minutes, my_Dtime.zone, my_Atime.hours, my_Atime.minutes, my_Atime.zone);  
            break;   
        }else if(total > flights[7].depature_time){
            struct time my_Dtime = split_Dtime(7);
            struct time my_Atime = split_Atime(7);
            printf("Closest departure time is %d:%02d %s, arriving at %d:%02d %s\n",my_Dtime.hours, my_Dtime.minutes, my_Dtime.zone, my_Atime.hours, my_Atime.minutes, my_Atime.zone); 
            break;    
        }
        
    }

    return 0;
}

struct time split_Dtime(int i){
    struct time t;
    t.hours = flights[i].depature_time /60;
    if(t.hours > 12){
        t.hours = t.hours-12;
    }
    t.minutes = flights[i].depature_time % 60;
    if(flights[i].depature_time > 720){
        strcpy(t.zone,"p.m.");
    }else{
        strcpy(t.zone,"a.m.");
    }
    return t;
}
struct time split_Atime(int i){
    struct time t;
    t.hours = (flights[i].arrival_time / 60);
    if(t.hours > 12){
        t.hours = t.hours-12;
    }
    t.minutes = flights[i].arrival_time % 60;
    if(flights[i].arrival_time > 720){
        strcpy(t.zone,"p.m.");
    }else{
        strcpy(t.zone,"a.m.");
    }
    return t;
}