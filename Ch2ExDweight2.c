#include <stdio.h>
int main()
{
    int length, width, height, volume;

    printf("輸入長:");
    scanf("%d", &length);
    printf("輸入寬:");
    scanf("%d", &width);
    printf("輸入高");
    scanf("%d", &height);
    volume = length * width * height;
    printf("體積為:%d\n", volume);

    return 0;
}`