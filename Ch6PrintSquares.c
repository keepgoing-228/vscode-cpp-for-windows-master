#include<stdio.h>

int main(){
    int i = 1;
    int num;
    printf("Enter number of entries in table: \n");
    scanf("%d",&num);//scanf越簡單越好
    while (i <= num){
        //printf("%d\t%d*%d\n",i,i,i);
        printf("%10d%10d\n",i,i*i);
        i++;
    }

    return 0;
}