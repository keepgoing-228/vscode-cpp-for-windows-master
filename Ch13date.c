#include<stdio.h>
#include<string.h>


void transform_and_print(int month, int day, int year);

int main(){
    int m, d, y;
    scanf("%d/%d/%d",&m,&d,&y);
    // printf("%d\n",m);
    transform_and_print(m,d,y);
    return 0; 
}

void transform_and_print(int month, int day, int year){
    char mon[100];
    switch (month)
    {
    case 1:
        strcpy(mon,"January");
        break;
    case 2:
        strcpy(mon,"February");
        break;    
    case 3:
        strcpy(mon,"March");
        break;
    case 4:
        strcpy(mon,"April");
        break;
    case 5:
        strcpy(mon,"May");
        break;
    case 6:
        strcpy(mon,"June");
        break;
    case 7:
        strcpy(mon,"July");
        break;
    case 8:
        strcpy(mon,"August");
        break;
    case 9:
        strcpy(mon,"September");
        break;
    case 10:
        strcpy(mon,"October");
        break;
    case 11:
        strcpy(mon,"November");
        break;
    case 12:
        strcpy(mon,"December");
        break;        
    default:
        break;
    }

    printf("You entered the date %s %d, %d",mon,day,year);

    return;
}