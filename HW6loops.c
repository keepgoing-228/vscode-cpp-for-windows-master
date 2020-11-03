#include<stdio.h>

int main(){
    int mm, dd, yy;
    int month=1000, day=1000, year=1000;//真正的
    while(1){
        scanf("%d/%d/%d",&mm ,&dd, &yy);
        if(mm == 0 && dd == 0 && yy == 0)
        break;

/*        if (mm >=1 && mm <=12){
            if(dd >= 1 && dd <= 31){
                if(yy >= 00 && yy <= 99){
                    printf("%d/%d/%2d is the earliest date");
                }
            }      
        }
*/
        
        if (yy < year){
            year = yy;
            month = mm;
            day = dd;
        }else if(yy == year){
            //month = mm;
            //day = dd;
            if (mm < month){
                month = mm;
                day = dd;
            }else if(mm == month){
                if (dd <= day){
                    day = dd;
                }
            }
        }
    }
    if (year>=10){
        printf("%d/%d/%d is the earliest date\n",month,day,year);
    }
    else if (year<10){
        printf("%d/%d/0%d is the earliest date\n",month,day,year);
    }
    return 0;
}