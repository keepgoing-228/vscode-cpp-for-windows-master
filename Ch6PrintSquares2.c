#include <stdio.h>

int main()
{
    /*
    int num;
    printf("Enter number of entries in table: ");
    scanf("%d",&num);
    for(int i = 1; i <= num; i++){
        printf("%10d%10d\n",i,i*i);
    }
*/
    int i, n, odd, square;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    i = 1;
    odd = 3;
    for (square = 1; i <= n; odd += 2){
        printf("%10d%10d\n", i, square);
        ++i;
        square += odd;
    }
    
    return 0;
}