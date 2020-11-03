#include<stdio.h>

int main(){
    int a1, b1, c1, d1, a2, b2, c2, d2, a3, b3, c3, d3, a4, b4, c4, d4;
    scanf("%2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d",&a1,&b1,&c1,&d1,&a2,&b2,&c2,&d2,&a3,&b3,&c3,&d3,&a4,&b4,&c4,&d4);
    printf("%2d %2d %2d %2d\n",a1, b1, c1, d1);
    printf("%2d %2d %2d %2d\n",a2, b2, c2, d2);
    printf("%2d %2d %2d %2d\n",a3, b3, c3, d3);
    printf("%2d %2d %2d %2d\n\n",a4, b4, c4, d4);
    int r1,r2,r3,r4,co1,co2,co3,co4,dia1,dia2;
    r1 = a1+b1+c1+d1;
    r2 = a2+b2+c2+d2;
    r3 = a3+b3+c3+d3;
    r4 = a4+b4+c4+d4;
    co1 = a1+a2+a3+a4;
    co2 = b1+b2+b3+b4;
    co3 = c1+c2+c3+c4;
    co4 = d1+d2+d3+d4;
    dia1 = a1+b2+c3+d4;
    dia2 = d1+c2+b3+a4;
    printf("Row sums: %2d %2d %2d %2d\n",r1,r2,r3,r4);
    printf("Column sums: %2d %2d %2d %2d\n",co1,co2,co3,co4);
    printf("Diagonal sums: %2d %2d\n",dia1,dia2);

    return 0;
    }