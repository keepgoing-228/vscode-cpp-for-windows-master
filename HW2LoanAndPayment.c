#include<stdio.h>

int main(){

    float loan, rate, payment, c1;
    scanf("%f",&loan);
    scanf("%f",&rate);
    scanf("%f",&payment);
    c1 = loan * (1 + rate/100/12) - payment;
    printf("Balance remaining after first payment: $%.2f\n",c1);
    c1 = c1 * (1 + rate/100/12) - payment;
    printf("Balance remaining after second payment: $%.2f\n",c1);
    c1 = c1 * (1 + rate/100/12) - payment;
    printf("Balance remaining after third payment: $%.2f\n",c1);

    return 0;
}