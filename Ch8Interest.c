#include<stdio.h>
#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))//陣列元素個數
#define INITIAL_BALANCE 100.00//最一開始的資本

int main(){
    int i, low_rate, num_years, year;
    double value[5];

    printf("Enter interest rate: ");
    scanf("%d",&low_rate);
    printf("Enter number of year: ");
    scanf("%d",&num_years);

    printf("\nYears");
    for(i = 0; i < NUM_RATES; i++){
        printf("%6d%%",low_rate + i);
        value[i] = INITIAL_BALANCE;//每一列都要重新算變成100.00
    }
    printf("\n");

    for(year = 1;year <= num_years; year++){
        printf("%3d    ",year);
        for(i = 0;i <NUM_RATES; i++){
            value[i] += (low_rate + i)/ 100.0 * value[i];
            printf("%7.2f",value[i]);
        }
        printf("\n");
    }


    return 0;
}