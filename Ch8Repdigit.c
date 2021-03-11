/*
#include<stdio.h>
#include<stdbool.h>


int main(){
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%1d",&n);
    while (n>0){
        digit = n %10;
        if (digit_seen[digit]){
            break;
        }
        digit_seen[digit] = true;
        n /= 10;
    }
    if (n > 0){
        printf("Repeated digit\n");
    }else{
        printf("No repeated digit\n");
    }
    
    return 0;
}
*/

#include <stdbool.h> /* C99 only */
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false};//陣列裡全都是false，不會超過十個
    int digit;
    long n;
        printf("Enter a number: ");
    scanf("%ld", &n);
    while (n > 0)
    {
        digit = n % 10;
        if (digit_seen[digit])//digit_seen[digit]=true
            break;
        digit_seen[digit] = true;
        n /= 10;//  n = n / 10，除到最後n會等於0就會跳脫迴圈
    }
    if (n > 0)
        printf("Repeated digit\n");
    else
        printf("No repeated digit\n");
    return 0;
}
