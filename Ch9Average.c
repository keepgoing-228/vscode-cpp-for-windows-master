
#include<stdio.h>
double average(double a, double b);


int main(){
    double x, y, z;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf",&x, &y,&z);//是L的小寫
    printf("Average of %g and %g: %g\n",x,y,average(x,y));
    printf("Average of %g and %g: %g\n",y,z,average(y,z));
    printf("Average of %g and %g: %g\n",x,z,average(x,z));
//  printf("Average of three\n",average(average(x,y),average(y,z)));
//無法
    return 0;
}


double average(double a, double b){
    return (a + b)/2;
}
/*

#include <stdio.h>
double average(double a, double b)
{
    return (a + b) / 2;
}
int main(void)
{
    double x, y, z;
    
    printf("Enter three numbers: ");
    scanf("%lf%lf%lf", &x, &y, &z);
    printf("Average of %g and %g: %g\n", x, y, average(x, y));
    printf("Average of %g and %g: %g\n", y, z, average(y, z));
    printf("Average of %g and %g: %g\n", x, z, average(x, z));
    return 0;
}
*/