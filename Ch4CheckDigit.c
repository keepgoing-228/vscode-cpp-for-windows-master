#include <stdio.h>

int main(){
    int d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12,d13,sum1,sum2,total,ans;
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d\n",&d1,&d2,&d3,&d4,&d5,&d6,&d7,&d8,&d9,&d10,&d11,&d12);
    sum1 = d1+d3+d5+d7+d9+d11;
    sum2 = d2+d4+d6+d8+d10+d12;
    total = sum2 * 3 +sum1 ;
    total = (total-1)%10;
    ans = 9-total;
    //printf("%d,%d,%d,%d\n",sum1,sum2,total,ans);
    printf("Check digit: %1d\n",ans);
    return 0;
}
